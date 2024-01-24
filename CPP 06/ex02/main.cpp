/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:09:17 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 15:50:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define CLASS_A "This is a A class object"
#define CLASS_B "This is a B class object"
#define CLASS_C "This is a C class object"

#define CLEAR "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

Base	*generate(void)
{
	int	number;
	A	*a;
	B	*b;
	C	*c;

	std::srand(static_cast<unsigned int>(std::time(0)));
	number = std::rand() % 3;
	if (number == 0)
	{
		a = new A;
		return (a);
	}
	else if (number == 1)
	{
		b = new B;
		return (b);
	}
	else
	{
		c = new C;
		return (c);
	}
}

void	identify(Base *p)
{
	std::cout << YELLOW <<"Function to identify using pointer called:" << CLEAR << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << GREEN << CLASS_A << CLEAR << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << GREEN << CLASS_B << CLEAR << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << GREEN << CLASS_C << CLEAR << std::endl;
	else
		std::cout << RED << "This is an invalid type" << CLEAR << std::endl;
}

void	identify(Base &p)
{
	std::cout << YELLOW << "Function to identify using reference called:" << CLEAR << std::endl;
	if (dynamic_cast<A *>(&p))
		std::cout << GREEN << CLASS_A << CLEAR << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << GREEN << CLASS_B << CLEAR << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << GREEN << CLASS_C << CLEAR << std::endl;
	else
		std::cout << RED << "This is an invalid type" << CLEAR << std::endl;
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(NULL);
	identify(base);
	identify(*base);
	delete (base);
	return (0);
}

// dynamic_cast can be used for type identifications
// in polymorphic classes (at least one virtual function)
// (that is why we create a base class
// with a virtual destructor)

// if (dynamic_cast<A *>(&p)) reiceves an object of class D
// the dynamic_cast will return a null pointer