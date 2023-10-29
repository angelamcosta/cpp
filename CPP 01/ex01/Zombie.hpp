/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:11:39 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 20:50:34 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# define RED "\033[91;1m"
# define GREEN "\033[92;1m"
# define YELLOW "\033[93;1m"
# define BLUE "\033[94;1m"
# define PINK "\033[95;1m"
# define CLEAR "\033[0m"
# define DECORATION "●～●～●～●～●"
# include <iostream>

class Zombie
{
private:
	std::string name_;

public:
	Zombie();
	~Zombie();
	void announce(void);
	void addName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif