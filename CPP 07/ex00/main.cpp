/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:07:26 by anlima            #+#    #+#             */
/*   Updated: 2024/01/29 14:30:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#define CLEAR "\033[0m"
#define GREEN "\033[32m"

template <typename T> void testActions(T &arg1, T &arg2)
{
	std::cout << "The min between arg1 and arg2 is " << GREEN << min(arg1, arg2) << CLEAR << std::endl;
	std::cout << "The max between arg1 and arg2 is " << GREEN << max(arg1, arg2) << CLEAR << std::endl;
	std::cout << "Before swap: arg1 = " << GREEN << arg1 << CLEAR << ", arg2 = " << GREEN << arg2 << CLEAR << std::endl;
	swap(arg1, arg2);
	std::cout << "After swap: arg1 = " << GREEN << arg1 << CLEAR << ", arg2 = " << GREEN << arg2 << CLEAR << std::endl;
}

int	main(void)
{
	try
	{
		int x = 5, y = 10;
		char a = 'a', z = 'z';
		std::string str1 = "Hello", str2 = "World";
		
		testActions(x, y);
		testActions(a, z);
		testActions(str1, str2);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}