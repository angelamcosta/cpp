/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:20:05 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:37:47 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void findAndReplace(std::string filename, std::string s1, std::string s2)
{
	std::string line;
	std::ifstream inputFile(filename);
	std::ifstream outputFile(filename + ".replace");

	if (!inputFile)
	{
		std::cout << "Error! Unable to open " << filename << std::endl;
		return;
	}
	if (!outputFile)
	{
		std::cout << "Error! Unable to open or create " << filename << ".replace " << std::endl;
		return;
	}
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
