/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:52:04 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/18 18:05:22 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <cstdlib>
# include <list>
# include <map>

class BitcoinExchange
{
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &src);
	virtual ~BitcoinExchange();
	BitcoinExchange &operator = (const BitcoinExchange &rhs);

	std::string						change(std::string inputFilePath);

private:
	void											inputFileIsValid();
	void											extractInput();
	void											extractDataBase();
	void											operations();
	double											findCorrespondence(std::string inputDate);
	bool											inputLineIsValid(std::string date, float value);
	std::ifstream									_inputFile;
	std::string										_inputFilePath;
	std::map< std::string, float >					_dataBase;
	std::ostringstream								_returnPrompt;
	std::list< std::pair< std::string, float > >	_input;

};

bool	strIsDigit(const std::string str);

#endif // BITCOINEXCHANGE_HPP
