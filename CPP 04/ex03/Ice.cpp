/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:48:54 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 00:08:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice &src) : AMateria(src)
{
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
