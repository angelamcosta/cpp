/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:16:18 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:02:49 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type_(type) {}

const std::string &Weapon::getType(void)
{
	return this->type_;
}

void Weapon::setType(const std::string &type)
{
	this->type_ = type;
}
