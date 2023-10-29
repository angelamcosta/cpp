/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:16:18 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 21:42:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type_ = "";
}

Weapon::Weapon(const std::string &type)
{
	this->type_ = type;
}

const std::string &Weapon::getType(std::string type)
{
	return this->type_;
}

void Weapon::setType(const std::string &type)
{
	this->type_ = type;`
}