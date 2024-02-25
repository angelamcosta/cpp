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