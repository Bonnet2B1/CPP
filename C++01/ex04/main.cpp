/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:25:01 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/21 21:00:09 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string modifiedLine(std::string line, std::string s1, std::string s2)
{
	(void)line;
	(void)s1;
	(void)s2;

	size_t occurenceStart;
	size_t occurenceLen;

	while ((occurenceStart = line.find(s1)) != std::string::npos)
	{
		occurenceLen = s1.length();
		line.erase(occurenceStart, occurenceLen);
		line.insert(occurenceStart, s2);
	}

	return (line.append("\n"));
}

int main (int argc, char** argv)
{
	if (argc != 4)
		return (std::cout << "Wrong number of arguments" << std::endl, 1);

	std::ifstream srcFile;
	srcFile.open(argv[1]);
	if (!srcFile.is_open())
		return (std::cout << "Can't open " << argv[1] << std::endl, 1);

	std::string newFileName = (std::string)argv[1] += ".replace";
	std::ofstream newFile;
	newFile.open(newFileName.c_str());
	if (!newFile.is_open())
		return (std::cout << "Error creating" << newFileName << std::endl, 1);

	std::string line;
	while (std::getline(srcFile, line))
		newFile << modifiedLine(line, (std::string)argv[2], (std::string)argv[3]);

	newFile.close();
	srcFile.close();
	return (0);
}

// int main (int argc, char** argv)
// {
// 	if (argc != 4)
// 		return (std::cout << "Wrong number of arguments" << std::endl, 1);

// 	std::ifstream srcFile;
// 	srcFile.open(argv[1]);
// 	if (!srcFile.is_open())
// 		return (std::cout << "Can't open " << argv[1] << std::endl, 1);

// 	std::string newFileName = (std::string)argv[1] += ".replace";
// 	std::ofstream newFile;
// 	newFile.open(newFileName);
// 	if (!newFile.is_open())
// 		return (std::cout << "Error creating" << newFileName << std::endl, 1);

// 	std::string line;
// 	while (std::getline(srcFile, line))
// 		newFile << modifiedLine(line, (std::string)argv[2], (std::string)argv[3]);

// 	newFile.close();
// 	srcFile.close();
// 	return (0);
// }
