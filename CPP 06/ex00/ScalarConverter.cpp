/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:25:26 by anlima            #+#    #+#             */
/*   Updated: 2024/01/23 20:18:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
	if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
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
	if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
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
	if ((iss >> f) && (iss.peek() == EOF || (iss >> c && c == 'f'
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
	if ((iss >> d) && (iss.peek() == EOF || (iss >> c && c == 'f'
				&& iss.peek() == EOF)))
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}
