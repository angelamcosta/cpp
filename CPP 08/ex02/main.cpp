/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:09 by anlima            #+#    #+#             */
/*   Updated: 2024/02/25 18:56:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(3);
    mutantStack.push(4);
    mutantStack.push(5);

    std::cout << "Elements in the stack (using iterators): ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Doubling the elements: ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
    {
        *it *= 2;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Popping elements: ";
    while (!mutantStack.empty())
    {
        std::cout << mutantStack.top() << " ";
        mutantStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
