/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:04:21 by anlima            #+#    #+#             */
/*   Updated: 2024/01/25 15:56:38 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Templated containers, iterators, algorithms

// in c++, containers are objects that store collections of
// elements (like stacks, maps, queues, etc)

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(2);
	v.push_back(22);
	try
	{
		std::cout << "The number " << *easyfind(v,
			22) << " is in the vectors list." << std::endl;

		std::cout << "The number " << *easyfind(v,
			3) << " is in the vectors list." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}