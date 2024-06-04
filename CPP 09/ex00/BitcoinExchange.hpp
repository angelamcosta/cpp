/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:04:22 by anlima            #+#    #+#             */
/*   Updated: 2024/06/04 10:40:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange {
    private:
        std::map<std::string, float> _exchangeRates;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &copy);

        void addExchangeRate(std::string const date, float const value);
        float getExchangeRate(std::string date);

        void populateExchangeRates();
        int isValidDate(std::string const &date);
};

#endif