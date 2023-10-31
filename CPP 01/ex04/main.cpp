/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:20:05 by anlima            #+#    #+#             */
/*   Updated: 2023/10/31 17:02:05 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void findAndReplace(std::string filename, std::string s1, std::string s2)
{
	int	index = 0;
	size_t value;
	std::string aux;
	std::string line;
	std::fstream inputFile;
	std::fstream outputFile;

	inputFile.open(filename.c_str(), std::ios::in);
	outputFile.open(std::string(filename + ".replace").c_str(), std::ios::out);
	if (!inputFile)
	{
		std::cout << "Error! Unable to open " << filename << std::endl;
		return;
	}
	if (!outputFile)
	{
		std::cout << "Error! Unable to open " << filename << ".replace" << std::endl;
		return;
	}
	while (getline(inputFile, line))
	{
		value = line.find(s1, index);
		if (value != std::string::npos)
		{
			aux = line.substr(value + s1.size());
			line.erase(value);
			line += (s2 + aux);
			index = value + s1.size();
		}
		outputFile << line;
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	inputFile.close();
	outputFile.close();
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error! Too many args." << std::endl;
		return (1);
	}
	findAndReplace(argv[1], argv[2], argv[3]);
	return (0);
}
