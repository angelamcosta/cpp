/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:21:46 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:38:46 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name_ = name;
	FragTrap::hitPoints_ = 100;
	ScavTrap::energyPoints_ = 50;
	FragTrap::attackDamage_ = 30;
	std::cout << "[DiamondTrap] " << name << " was created" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap] " << this->name_ << " was destroyed" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "[DiamondTrap] who am I? " << this->name_ << ", ClapTrap name " << this->ClapTrap::name_ << std::endl;
}
