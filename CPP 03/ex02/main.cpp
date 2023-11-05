/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:46:42 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 19:16:36 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragTrap("Dummy");
	
	fragTrap.attack("Norminette");
	fragTrap.takeDamage(5);
	fragTrap.beRepaired(2);
	fragTrap.highFivesGuys();
	// fragTrap.takeDamage(97);
	// fragTrap.highFivesGuys();
	return (0);
}
