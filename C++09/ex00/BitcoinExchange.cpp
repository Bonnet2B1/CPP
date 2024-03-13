/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:51:59 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/13 19:22:18 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator = (const BitcoinExchange &rhs)
{
	if (this != &rhs) {
		this->_input = rhs._input;
		this->_inputFilePath = rhs._inputFilePath;
		this->_inputFile.open(this->_inputFilePath.c_str());
		this->_dataBase = rhs._dataBase;
	}
	return (*this);
}

std::string	BitcoinExchange::change(std::string inputFilePath)
{
	this->_inputFilePath = inputFilePath;
	inputFileIsValid();
	extractInput();
	extractDataBase();
	operations();
	return (this->_returnPrompt.str());
}


void	BitcoinExchange::operations()
{
	for (std::vector<std::pair<std::string, float> >::iterator it = this->_input.begin(); it != this->_input.end(); it++)
	{
		if(inputLineIsValid(it->first, it->second))
			this->_returnPrompt << it->first << " => " << it->second << " = " << it->second * findCorrespondence(it->first) << std::endl;
	}
}

bool	BitcoinExchange::inputLineIsValid(std::string date, float value)
{
	if (!strIsDigit(date.substr(0, 4))
		|| std::atoi(date.substr(0, 4).c_str()) < 0
		|| date[4] != '-'
		|| !strIsDigit(date.substr(5, 2))
		|| std::atoi(date.substr(5, 2).c_str()) < 0
		|| std::atoi(date.substr(5, 2).c_str()) > 12
		|| date[7] != '-'
		|| !strIsDigit(date.substr(8, 2))
		|| std::atoi(date.substr(8, 2).c_str()) < 0
		|| std::atoi(date.substr(8, 2).c_str()) > 31
		|| date[10])
	{
		this->_returnPrompt << "Error: bad input => " << date << std::endl;
		return (false);
	}
	else if (value < 0)
	{
		this->_returnPrompt << "Error: not a positive number." << std::endl;
		return (false);
	}
	else if (value > 1000)
	{
		this->_returnPrompt << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

void	BitcoinExchange::extractInput()
{
	std::string	line;
	std::string	date;
	float		value;

	while (std::getline(this->_inputFile, line))
	{
		if (line.find(" | ") == std::string::npos)
		{
			date = line;
			value = 0;
		}
		else
		{
			date = line.substr(0, line.find(" | "));
			value = std::atof(line.substr(line.find(" | ") + 3).c_str());
		}
		this->_input.push_back(std::make_pair(date, value));
	}
}

void	BitcoinExchange::extractDataBase()
{
	std::ifstream	dataBaseFile;
	std::string		line;
	std::string		date;
	float			exchangeRate;

	dataBaseFile.open("data.csv");
	std::getline(dataBaseFile, line);
	while (std::getline(dataBaseFile, line))
	{
		date = line.substr(0, line.find(','));
		exchangeRate = std::atof(line.substr(line.find(',') + 1).c_str());
		this->_dataBase.insert(std::make_pair(date, exchangeRate));
	}
}

bool	strIsDigit(const std::string str)
{
	for (int i = 0; str[i]; i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
	return (true);
}

void	BitcoinExchange::inputFileIsValid()
{
	std::string		testString;

	this->_inputFile.open(this->_inputFilePath.c_str());
	if (!this->_inputFile.is_open())
		throw std::invalid_argument("Error input file: can't open");

	if (!std::getline(this->_inputFile, testString))
		throw std::invalid_argument("Error input file: is empty");

	if (testString != "date | value")
		throw std::invalid_argument("Error input file: first line must be \"date | value\"");
}

double	BitcoinExchange::findCorrespondence(std::string inputDate)
{
	return ((float)((this->_dataBase.lower_bound(inputDate))->second));
}
