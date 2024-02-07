/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:25:26 by anlima            #+#    #+#             */
/*   Updated: 2024/02/07 14:03:12 by anlima           ###   ########.fr       */
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
	float	f;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "-inf" || literal == "+inf"
		|| literal[0] == '\0')
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (isChar(literal))
		std::cout << "char: " << literal[0] << std::endl;
	else if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
	{
		if (f >= std::numeric_limits<int>::min()
			&& f <= std::numeric_limits<int>::max())
		{
			i = static_cast<int>(f);
			if (i < 32 || i == 127)
				std::cout << "char: "
							<< "Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(f) << std::endl;
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
	float	f;
	char	c;

	std::istringstream iss(literal);
	if (literal == "nan" || literal == "-inf" || literal == "+inf"
		|| literal[0] == '\0')
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	if (isChar(literal))
		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	else if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
	{
		if (f >= std::numeric_limits<int>::min()
			&& f <= std::numeric_limits<int>::max())
			std::cout << "int: " << static_cast<int>(f) << std::endl;
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
	if (literal == "-inf" || literal == "+inf" || literal[0] == '\0')
	{
		std::cout << "float: impossible" << std::endl;
		return ;
	}
	if (literal == "nan")
	{
		std::cout << "float: nanf" << std::endl;
		return ;
	}
	if (isChar(literal))
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
	if (literal == "-inf" || literal == "-inf" || literal == "+inf"
		|| literal[0] == '\0')
	{
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (literal == "nan")
	{
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (isChar(literal))
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(literal[0]) << std::endl;
	else if ((iss >> d) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

int	ScalarConverter::isChar(const std::string &literal)
{
	if ((literal.size() == 1) && (literal[0] >= 97 && literal[0] <= 122) || (literal[0] >= 65 && literal[0] <= 90))
		return (1);
	return (0);
}