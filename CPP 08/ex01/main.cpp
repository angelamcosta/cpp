/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:30:41 by anlima            #+#    #+#             */
/*   Updated: 2024/02/25 22:03:07 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    try
    {
        Span span(7);

        span.addNumber(0);
        span.addNumber(1);
        span.addNumber(2);
        span.addNumber(3);

        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;

        std::vector<int> additionalNumbers;
		additionalNumbers.push_back(6);
		additionalNumbers.push_back(7);
		additionalNumbers.push_back(8);
        span.addNumber(additionalNumbers.begin(), additionalNumbers.end());
        
        std::cout << "Shortest span after adding more numbers: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span after adding more numbers: " << span.longestSpan() << std::endl;

        span.addNumber(9);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return (0);
}
