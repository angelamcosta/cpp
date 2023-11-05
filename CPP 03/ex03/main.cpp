/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:46:42 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:27:15 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap("Dummy");
	
	diamondTrap.attack("Norminette");
	diamondTrap.takeDamage(5);
	diamondTrap.beRepaired(2);
	diamondTrap.whoAmI();
	// fragTrap.takeDamage(97);
	// fragTrap.highFivesGuys();
	return (0);
}
