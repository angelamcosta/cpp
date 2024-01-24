/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:41:04 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 18:50:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void printValue(T &t)
{
	std::cout << "t has the value => " << t << std::endl;
}

int	main(void)
{
	int intArray[4] = {1, 2, 3, 4};
	iter(intArray, 4, &printValue);

    char charArray[4] = {'a', 'b', 'c', 'd'};
	iter(charArray, 4, &printValue);
	return (0);
}