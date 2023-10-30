/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:17:59 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 09:58:53 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon) {}

void HumanA::attack(void)
{
	std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}
