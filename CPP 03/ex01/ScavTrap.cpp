/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:21:33 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:12:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->hitPoints_ = 100;
	this->energyPoints_ = 50;
	this->attackDamage_ = 20;
	std::cout << "[ScavTrap] " << name << " was created" << std::endl;
}


ScavTrap::~ScavTrap(void) { std::cout << "[ScavTrap] " << this->name_ << " was destroyed" << std::endl; }

void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "[ScavTrap] " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of " << RED << "damage" << CLEAR << "!" << std::endl;
		this->energyPoints_--;
	}
}

void ScavTrap::guardGate(void)
{
	if (this->hitPoints_ > 0)
		std::cout << "[ScavTrap] " << this->name_ << " is now in Gate keeper mode." << std::endl;
}
