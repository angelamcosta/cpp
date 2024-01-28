/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:09 by anlima            #+#    #+#             */
/*   Updated: 2024/01/28 18:26:10 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	MutantStack<int> mutantStack;

	mutantStack.push(1);
	mutantStack.push(2);
	mutantStack.push(3);
	std::cout << "MutantStack elements: ";
	for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return (0);
}
