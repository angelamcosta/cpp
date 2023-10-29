/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:11:06 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 20:40:39 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			N = 2;
	int			i = -1;
	std::string	name = "Lela";
	Zombie		*horde = zombieHorde(N, name);

	while (++i < N)
		horde[i].announce();
	delete[] horde;
	return (0);
}
