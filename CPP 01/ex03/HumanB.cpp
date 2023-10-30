/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:18:04 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:17:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name_(name), weapon_(NULL) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_ = &weapon;
}

void HumanB::attack(void)
{
	if (weapon_)
		std::cout << this->name_ << " attacks with their " << weapon_->getType() << std::endl;
	else
		std::cout << this->name_ << " attacks with their bare hands" << std::endl;
}
