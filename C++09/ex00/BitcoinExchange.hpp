/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:52:04 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/13 19:22:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <sstream>
# include <iostream>
# include <fstream>
# include <map>
# include <cstdlib>
# include <vector>
class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	virtual ~BitcoinExchange();
	BitcoinExchange &operator = (const BitcoinExchange &rhs);

	std::string						change(std::string inputFilePath);

private:
	void										inputFileIsValid();
	void										extractInput();
	void										extractDataBase();
	void										operations();
	double										findCorrespondence(std::string inputDate);
	bool										inputLineIsValid(std::string date, float value);
	std::ifstream								_inputFile;
	std::string									_inputFilePath;
	std::map<std::string, float>				_dataBase;
	std::ostringstream							_returnPrompt;
	std::vector<std::pair<std::string, float> > _input;

};

bool	strIsDigit(const std::string str);

#endif // BITCOINEXCHANGE_HPP
