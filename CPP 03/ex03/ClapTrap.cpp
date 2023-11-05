/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:01:51 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:04:14 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name_(name), hitPoints_(10), energyPoints_(10), attackDamage_(0) { std::cout << "[ClapTrap] Default constructor called" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &other) { *this = other; std::cout << "[ClapTrap] Copy constructor called" << std::endl; }

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "[ClapTrap] Copy assignment operator called" << std::endl;
	this->name_ = other.name_;
	this->hitPoints_ = other.hitPoints_;
	this->energyPoints_ = other.energyPoints_;
	this->attackDamage_ = other.attackDamage_;
	return (*this);
}

ClapTrap::~ClapTrap(void) { std::cout << "[ClapTrap] Destructor called" << std::endl; }

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "[ClapTrap] " << this->name_ << " attacks " << target << ", causing " << this->attackDamage_ << " points of " << RED << "damage" << CLEAR << "!" << std::endl;
		this->energyPoints_--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints_)
	{
		std::cout << "[ClapTrap] " << this->name_ << " gets attacked, " << RED << "losing " << CLEAR << amount << " hit points!" << std::endl;
		std::cout << "[ClapTrap] " << this->name_ << " is " << RED << "dead." << CLEAR << std::endl;
		this->hitPoints_ = 0;
	}
	else if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "[ClapTrap] " << this->name_ << " gets attacked, " << RED << "losing " << CLEAR << amount << " hit points!" << std::endl;
		this->hitPoints_ -= amount;
		std::cout << "[ClapTrap] " << this->name_ << " now has " << this->hitPoints_ << " hit points." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints_ > 0 && this->hitPoints_ > 0)
	{
		std::cout << "[ClapTrap] " << this->name_ << GREEN << " repairs" << CLEAR << " itself by " << amount << " of hit points!" << std::endl;
		this->hitPoints_ += amount;
		std::cout << "[ClapTrap] " << this->name_ << " now has " << this->hitPoints_ << " hit points." << std::endl;
		this->energyPoints_--;
	}
}
