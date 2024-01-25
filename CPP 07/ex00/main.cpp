/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:07:26 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 18:16:52 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	try
	{
		int x = 5, y = 10;
		std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
		swap(x, y);
		std::cout << "After swap: x = " << x << ", y = " << y << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}