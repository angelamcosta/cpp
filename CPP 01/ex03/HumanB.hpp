/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:18:06 by anlima            #+#    #+#             */
/*   Updated: 2023/10/30 10:15:15 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name_;
	Weapon *weapon_;

public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);
	void attack(void);
};

#endif