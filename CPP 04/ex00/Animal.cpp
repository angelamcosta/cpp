/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:07 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 18:35:25 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "default";
}

Animal::Animal(const Animal &src)
{
	this->type = src.getType();
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Animal::makeSound(void) const
{
	if (this->type == "cat")
		std::cout << "[Cat] is mewoing" << std::endl;
	else if (this->type == "dog")
		std::cout << "[Dog] is barking" << std::endl;
	else
		std::cout << "[Animal] is making animal noises" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
