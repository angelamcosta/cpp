/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:32:31 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:01:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name_("") {}

Zombie::Zombie(const std::string& name) : name_(name) {}

Zombie::~Zombie(void)
{
	std::cout << RED << "Destructor called for `" << this->name_ << "` zombie. " << CLEAR << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE << this->name_ << ": BraiiiiiiinnnzzzZ..." << CLEAR << std::endl;
}

