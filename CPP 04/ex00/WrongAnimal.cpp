/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:43:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 18:47:11 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	this->type = src.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	if (this->type == "wrongCat")
		std::cout << "[WrongCat] is mewoing" << std::endl;
	else
		std::cout << "[WrongAnimal] is making animal noises" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
