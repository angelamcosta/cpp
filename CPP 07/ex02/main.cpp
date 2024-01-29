/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:29:21 by anlima            #+#    #+#             */
/*   Updated: 2024/01/29 12:30:28 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> void	printArray(Array<T> array);
void	printArraySize(unsigned int size);

template <typename T> void printArray(Array<T> array)
{
	int	len;

	len = array.size();
	std::cout << "array items: ";
	for (unsigned int i = 0; i < len; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void	printArraySize(unsigned int size)
{
	std::cout << "array size: " << size << std::endl;
}

int	main(void)
{
	Array<int> intArray(3);
	printArray(intArray);
	printArraySize(intArray.size());

    Array<char> charArray(4);
    charArray[0] = 'L';
    charArray[1] = 'e';
    charArray[2] = 'l';
    charArray[3] = 'a';
    printArray(charArray);
	printArraySize(charArray.size());

	try {
		std::cout << "Trying to acces a invalid position [6] of the charArray" << std::endl;
		charArray[6] = 'n';
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
