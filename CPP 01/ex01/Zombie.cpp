/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:13:09 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:01:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name_("") {}

void	Zombie::addName(std::string name)
{
	this->name_ = name;
}
Zombie::~Zombie(void)
{
	std::cout << RED << "Destructor called for zombie `" << this->name_ << "`. " << CLEAR << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE << this->name_ << ": BraiiiiiiinnnzzzZ..." << CLEAR << std::endl;
}
