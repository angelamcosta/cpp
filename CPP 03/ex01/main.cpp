/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:46:42 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 18:49:56 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("Dummy");
	
	scavTrap.attack("Norminette");
	scavTrap.takeDamage(5);
	//clapTrap.takeDamage(10);
	scavTrap.beRepaired(2);
	return (0);
}
