/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:44:46 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 16:28:26 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main()
{
	Point a(0.0f, 0.0f);
	Point b(3.0f, 0.0f);
	Point c(0.0f, 4.0f);

	Point point1(1.0f, 1.0f);
	Point point2(2.0f, 2.0f);
	Point point3(0.5f, 2.0f);
	Point point4(4.0f, 4.0f);
	Point point5(0.0f, 0.0f);

	std::cout << "Point (1.0, 1.0) is inside the triangle: " << bsp(a, b, c, point1) << std::endl;
	std::cout << "Point (2.0, 2.0) is inside the triangle: " << bsp(a, b, c, point2) << std::endl;
	std::cout << "Point (0.5, 2.0) is inside the triangle: " << bsp(a, b, c, point3) << std::endl;
	std::cout << "Point (4.0, 4.0) is inside the triangle: " << bsp(a, b, c, point4) << std::endl;
	std::cout << "Point (0.0, 0.0) is inside the triangle: " << bsp(a, b, c, point5) << std::endl;

	return (0);
}
