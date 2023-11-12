/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:18 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 20:48:11 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Copy constructor called" << std::endl;
	this->type = src.getType();
}

Dog::~Dog()
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " 🐕 is barking" << std::endl;
}
