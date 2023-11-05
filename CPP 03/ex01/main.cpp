/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:46:42 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:15:11 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("Dummy");
	
	scavTrap.attack("Norminette");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(2);
	scavTrap.guardGate();
	// scavTrap.takeDamage(97);
	// scavTrap.guardGate();
	return (0);
}
