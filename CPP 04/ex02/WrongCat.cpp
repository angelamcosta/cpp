/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:43:07 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 20:48:44 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << MAGENTA << "[WrongCat]" << CLEAR << " Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << MAGENTA << "[WrongCat]" << CLEAR << " Copy constructor called" << std::endl;
	this->type = src.getType();
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "[WrongCat]" << CLEAR << " Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << MAGENTA << "[WrongCat]" << CLEAR << " Copy assignment constructor called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << "[WrongCat]" << CLEAR << " 🐈 is mewoing" << std::endl;
}
