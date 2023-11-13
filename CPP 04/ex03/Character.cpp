/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:47:22 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 17:15:01 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "";
}

Character::Character(const Character &src)
{
	this->name = src.getName();
}

Character::Character(std::string name)
{
	this->name = name;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			this->inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}

	std::cout << "Could not equip the materia, inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
		return;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
	{
		std::cout << "Index out of bounds" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
}

void Character::printMemory(int idx)
{
	if (idx < 0 || idx > 3 || !this->inventory[idx])
	{
		std::cout << "Index out of bounds" << std::endl;
		return;
	}
	std::cout << this->inventory[idx] << std::endl;
}
