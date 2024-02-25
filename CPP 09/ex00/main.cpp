#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage => ./btc <filename>" << std::endl;
        return (1);
    }
    BitcoinExchange btcExchange;
    std::ifstream file(argv[1]);
    if (!file.is_open())
        throw std::runtime_error("Error: unable to open file");
    std::string line;
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
    return (0);
}
