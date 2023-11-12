/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:18 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 18:35:04 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "dog";
}

Dog::Dog(const Dog &src)
{
	this->type = src.getType();
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}
