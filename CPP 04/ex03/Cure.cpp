/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:47:44 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 00:08:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &src) : AMateria(src) 
{
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
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
