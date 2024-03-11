/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:30:41 by anlima            #+#    #+#             */
/*   Updated: 2024/03/11 13:58:32 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    Span span(10);

    try {
        std::vector<int> numbersToAdd;
        numbersToAdd.push_back(1);
        numbersToAdd.push_back(2);
        numbersToAdd.push_back(3);
        numbersToAdd.push_back(4);
        numbersToAdd.push_back(5);
        span.addNumber(numbersToAdd.begin(), numbersToAdd.end());
        std::cout << "Numbers added successfully!" << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try {
        std::vector<int> numbersToAdd;
        numbersToAdd.push_back(6);
        numbersToAdd.push_back(7);
        numbersToAdd.push_back(8);
        numbersToAdd.push_back(9);
        numbersToAdd.push_back(10);
        numbersToAdd.push_back(11);
        span.addNumber(numbersToAdd.begin(), numbersToAdd.end());
        std::cout << "Numbers added successfully!" << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    // try
    // {
    //     span.addNumber(11);
    //     std::cout << "Numbers added successfully!" << std::endl;
    //     std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    //     std::cout << "Longest span: " << span.longestSpan() << std::endl;
    // } catch (const std::out_of_range& e) {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }
    
    return (0);
}
