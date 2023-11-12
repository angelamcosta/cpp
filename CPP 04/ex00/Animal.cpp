/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:07 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 20:47:28 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << GREEN << "[Animal]" << CLEAR << " Contructor called" << std::endl;
	this->type = "default";
}

Animal::Animal(const Animal &src)
{
	std::cout << GREEN << "[Animal]" << CLEAR << " Copy contructor called" << std::endl;
	this->type = src.getType();
}

Animal::~Animal()
{
	std::cout << GREEN << "[Animal]" << CLEAR << " Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << GREEN << "[Animal]" << CLEAR << " Copy assignment contructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << GREEN << "[Animal]" << CLEAR << " is making animal noises" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
