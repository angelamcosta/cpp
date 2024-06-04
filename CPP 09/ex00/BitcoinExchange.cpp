/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:04:25 by anlima            #+#    #+#             */
/*   Updated: 2024/06/04 11:04:33 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { populateExchangeRates(); }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) { _exchangeRates = copy._exchangeRates; }

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
    if (this !=&copy)
        _exchangeRates = copy._exchangeRates;
    return (*this);
}

void BitcoinExchange::addExchangeRate(std::string const date, float const value)
{
    _exchangeRates.insert(std::pair<std::string, float>(date, value));
}

float BitcoinExchange::getExchangeRate(std::string date)
{
    std::map<std::string, float>::const_iterator it = _exchangeRates.lower_bound(date);
	if (it == _exchangeRates.end() || it->first != date)
	{
		if (it != _exchangeRates.begin())
		    --it;
	}
	return it->second;
}

void BitcoinExchange::populateExchangeRates()
{
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw std::runtime_error("Error: unable to open file data.csv");
    
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date, value;

        if (line == "date,exchange_rate" || line == "")
            continue ;
        if (!(std::getline(iss, date, ',') && std::getline(iss, value)))
            throw std::runtime_error("Error: invalid csv data format");
        float exchange_rate;
        std::stringstream ss(value);
        if (!(ss >> exchange_rate))
            throw std::runtime_error("Error: failed to convert exchange rate to float");
        this->addExchangeRate(date, exchange_rate);
    }
}

int BitcoinExchange::isValidDate(std::string const &date)
{
    if ((date.length() != 10) || (date[4] != '-') || (date[7] != '-'))
        return (0);
    int year, month, day;
    char separator;
    std::istringstream(date) >> year >> separator >> month >> separator >> day;

    if ((year < 0) || (month < 1 || month > 12) || (day < 1 || day > 31))
        return (0);
    if ((month == 2) && (year % 4 == 0) && (day > 29))
        return (0);
    if ((month == 2) && (year % 4 != 0) && (day > 28))
        return (0);
    return (1);
}
