/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:43:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 20:48:28 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << CYAN << "[WrongAnimal]" << CLEAR << " Constructor called" << std::endl;
	this->type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << CYAN << "[WrongAnimal]" << CLEAR << " Copy constructor called" << std::endl;
	this->type = src.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "[WrongAnimal]" << CLEAR << " Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << CYAN << "[WrongAnimal]" << CLEAR << " Copy assignment constructor called" << std::endl;
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << CYAN << "[WrongAnimal]" << CLEAR << " is making animal noises" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
