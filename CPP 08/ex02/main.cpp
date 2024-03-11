/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:09 by anlima            #+#    #+#             */
/*   Updated: 2024/03/11 13:55:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    std::cout << "Elements in the stack (using iterators): ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Doubling the elements: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        *it *= 2;
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "The stack size is: " << mstack.size() << std::endl;

    std::cout << "Popping elements: ";
    while (!mstack.empty())
    {
        std::cout << mstack.top() << " ";
        mstack.pop();
    }
    std::cout << std::endl;

    std::cout << "Adding the elements 5 and 17" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Popping the first element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "The stack size is: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Elements in the stack (using iterators): ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Popping elements: ";
    while (!mstack.empty())
    {
        std::cout << mstack.top() << " ";
        mstack.pop();
    }
    std::cout << std::endl;

    return 0;
}
