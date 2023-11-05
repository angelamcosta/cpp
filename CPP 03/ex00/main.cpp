/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:46:42 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 18:04:38 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Dummy");
	
	clapTrap.attack("Norminette");
	clapTrap.takeDamage(5);
	//clapTrap.takeDamage(10);
	clapTrap.beRepaired(2);
	return (0);
}
