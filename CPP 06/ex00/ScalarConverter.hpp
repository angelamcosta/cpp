/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:25:28 by anlima            #+#    #+#             */
/*   Updated: 2024/01/29 14:02:21 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iomanip>
# include <iostream>
# include <limits>
# include <sstream>
# include <string>

class ScalarConverter
{
  private:
	// making the construtor private in a class means that
	// the constructor can only be accessed and used in
	// the class itself, ie, can't be called outside the class,
	// ie, can`t be instantiated in an external context
	ScalarConverter()
	{
	}

  public:
	// static in this case means we can use the method
	// without an instance of the class
	static void convert(const std::string &literal);
	static void convertToChar(const std::string &literal);
	static void convertToInt(const std::string &literal);
	static void convertToFloat(const std::string &literal);
	static void convertToDouble(const std::string &literal);
	static int	isChar(const std::string &literal);
};

#endif
