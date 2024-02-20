/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:25:26 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 14:36:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

void ScalarConverter::convert(const std::string &literal)
{
	convertToChar(literal);
	convertToInt(literal);
	convertToFloat(literal);
	convertToDouble(literal);
}

void ScalarConverter::convertToChar(const std::string &literal)
{
	int		i;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "-inf" || literal == "+inf"
		|| literal[0] == '\0' || literal == "nanf" || literal == "-inff" 
		|| literal == "+inff" || literal == "inf" || literal == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isChar(literal) && literal.length() == 1)
		std::cout << "char: " << literal[0] << std::endl;
	else if ((iss >> i) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
	{
		if (i >= std::numeric_limits<int>::min()
			&& i <= std::numeric_limits<int>::max())
		{
			if (i < 32 || i >= 127)
				std::cout << "char: "
							<< "Non displayable" << std::endl;
			else
			{
				c = i;
				std::cout << "char: " << c << std::endl;
			}
		}
		else
			std::cout << "char: impossible" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::convertToInt(const std::string &literal)
{
	int		i;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "nanf" || literal[0] == '\0')
		std::cout << "int: nan" << std::endl;
	else if (literal == "-inf" || literal == "-inff")
		std::cout << "int: -inf" << std::endl;
	else if (literal == "+inff" || literal == "inf" || literal == "+inf" || literal == "inff")
		std::cout << "int: +inf" << std::endl;
	else if (isChar(literal) && literal.length() == 1 && literal[0] != '\0')
		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	else if ((iss >> i) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
	{
		if (i >= std::numeric_limits<int>::min()
			&& i <= std::numeric_limits<int>::max())
			std::cout << "int: " << i << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else
		std::cout << "int: impossible" << std::endl;
}

void ScalarConverter::convertToFloat(const std::string &literal)
{
	float	f;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "nanf" || literal[0] == '\0')
		std::cout << "float: nanf" << std::endl;
	else if (literal == "-inf" || literal == "-inff")
		std::cout << "float: -inff" << std::endl;
	else if (literal == "+inff" || literal == "inf" || literal == "+inf" || literal == "inff")
		std::cout << "float: +inff" << std::endl;
	else if (isChar(literal) && literal.length() == 1 && literal[0] != '\0')
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(literal[0]) << "f" << std::endl;
	else if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}

void ScalarConverter::convertToDouble(const std::string &literal)
{
	double	d;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "nanf" || literal[0] == '\0')
		std::cout << "double: nanf" << std::endl;
	else if (literal == "-inf" || literal == "-inff")
		std::cout << "double: -inff" << std::endl;
	else if (literal == "+inff" || literal == "inf" || literal == "+inf" || literal == "inff")
		std::cout << "double: +inff" << std::endl;
	else if (isChar(literal) && literal.length() == 1)
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(literal[0]) << std::endl;
	else if ((iss >> d) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

int	ScalarConverter::isChar(const std::string &literal)
{
	if (((literal.size() == 1) && (literal[0] >= 97 && literal[0] <= 122)) || (literal[0] >= 65 && literal[0] <= 90))
		return (1);
	return (0);
}