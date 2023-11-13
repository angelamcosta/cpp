/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 16:09:33 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << BLUE << "[Cat]" << CLEAR << " Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << BLUE << "[Cat]" << CLEAR << " Copy constructor called" << std::endl;
	this->type = src.getType();
}

Cat::~Cat()
{
	std::cout << BLUE << "[Cat]" << CLEAR << " Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << BLUE << "[Cat]" << CLEAR << " Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << BLUE << "[Cat]" << CLEAR << " 🐈 is meowing" << std::endl;
}
