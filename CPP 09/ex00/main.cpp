/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:04:20 by anlima            #+#    #+#             */
/*   Updated: 2024/03/12 12:57:13 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::ifstream file(argv[1]);
        if (!file.is_open())
            std::cout << "Unable to open the file" << std::endl;
        if (file.peek() == '\n')
            std::cout << "The file is empty" << std::endl;
        std::string line;
        BitcoinExchange btcExchange;
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string date;
            float value;
            char separator;

            if (line == "date | value")
                continue ;
            iss >> date >> separator >> value;
            if (!btcExchange.isValidDate(date))
                std::cout << "Error: bad input => " << date << std::endl;
            else if (value < 0)
                std::cout << "Error: not a positive number." << std::endl;
            else if (value > 1000)
                std::cout << "Error: too large a number." << std::endl;
            else
                std::cout << date << " => " << value << " = " << (btcExchange.getExchangeRate(date) * value) << std::endl;
        }
    }
    else
        std::cerr << "Usage => ./btc <filename>" << std::endl;
    return (0);
}
