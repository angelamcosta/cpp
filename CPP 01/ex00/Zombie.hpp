/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:32:42 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 22:22:58 by anlima           ###   ########.fr       */
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
	Zombie(const std::string& name);
	~Zombie();
	void announce(void);
};

#endif
