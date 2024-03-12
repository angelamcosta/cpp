/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:18 by anlima            #+#    #+#             */
/*   Updated: 2024/03/12 14:43:56 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << YELLOW << "[Dog]" << CLEAR << " Copy constructor called" << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
}

Dog::~Dog()
{
	delete this->brain;
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

Brain *Dog::getBrain(void) const
{
	return this->brain;
}
