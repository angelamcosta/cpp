/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:29:21 by anlima            #+#    #+#             */
/*   Updated: 2024/02/29 14:35:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

typedef struct	s_point {
	int	x;
	int	y;
}				t_point;

template <typename T>
void printArray(Array<T> array);
void printArraySize(unsigned int size);

template <typename T>
void printArray(Array<T> array)
{
	unsigned int len;

	len = array.size();
	std::cout << "array items: ";
	for (unsigned int i = 0; i < len; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void printArraySize(unsigned int size)
{
	std::cout << "array size: " << size << std::endl;
}

int main(void)
{
	Array<int> emptyArr;
	printArray(emptyArr);

	Array<char> charArray(4);
	charArray[0] = 'L';
	charArray[1] = 'e';
	charArray[2] = 'l';
	charArray[3] = 'a';
	printArray(charArray);
	
	Array<int> intArray(3);
	intArray[0] = 0;
	intArray[1] = 1;
	intArray[2] = 2;
	printArray(intArray);

	Array<t_point> pointArray(2);
	t_point a;
	t_point b;
	a.x = 1;
	a.y = 2;
	b.x = 3;
	b.y = 4;
	pointArray[0] = a;
	pointArray[1] = b;

	std::cout << "array items: " << "{ " << pointArray[0].x << ", " << pointArray[0].y << " } { " << pointArray[1].x << ", " << pointArray[1].y << " } " << std::endl;

	try
	{
		std::cout << "Trying to acces a invalid position [6] of the charArray" << std::endl;
		charArray[6] = 'n';
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
