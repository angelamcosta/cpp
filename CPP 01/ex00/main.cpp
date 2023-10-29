/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:57:34 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 19:06:07 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"

int	main(void)
{
	randomChump("Lelita");
	Zombie *lela = newZombie("Lela");
	lela->announce();
	delete lela;
	return (0);
}
