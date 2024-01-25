/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:30:41 by anlima            #+#    #+#             */
/*   Updated: 2024/01/25 17:43:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span span(4);

	try
	{
		span.addNumber(0);
		// span.addNumber(1);
		// span.addNumber(2);
		// span.addNumber(3);
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
        span.addNumber(5);
	}
	catch (std::exception &e)
	{
        std::cout << e.what() << std::endl;
	}
	return (0);
}