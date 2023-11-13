/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:46:50 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 23:49:32 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "default";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &src)
{
	this->type = src.getType();
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
