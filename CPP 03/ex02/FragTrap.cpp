/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:05:59 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:12:29 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->hitPoints_ = 100;
	this->energyPoints_ = 100;
	this->attackDamage_ = 30;
	std::cout << "[FragTrap] " << name << " was created" << std::endl;
}

FragTrap::~FragTrap(void) { std::cout << "[FragTrap] " << this->name_ << " was destroyed" << std::endl; }

void FragTrap::attack(const std::string &target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "[FragTrap] " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of " << RED << "damage" << CLEAR << "!" << std::endl;
		this->energyPoints_--;
	}
}

void FragTrap::highFivesGuys(void) 
{
	if (this->hitPoints_ > 0)
		std::cout << "[FragTrap] says `High five!`" << std::endl;
}
