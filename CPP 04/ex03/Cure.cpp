/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:47:44 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 17:05:09 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &src) 
{
	this->type = src.type;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
