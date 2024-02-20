/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:25:28 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 14:36:04 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iomanip>
# include <iostream>
# include <limits>
# include <sstream>
# include <string>
# include <stdio.h>

class ScalarConverter
{
  private:
	ScalarConverter();

  public:
	static void convert(const std::string &literal);
	static void convertToChar(const std::string &literal);
	static void convertToInt(const std::string &literal);
	static void convertToFloat(const std::string &literal);
	static void convertToDouble(const std::string &literal);
	static int	isChar(const std::string &literal);
};

#endif
