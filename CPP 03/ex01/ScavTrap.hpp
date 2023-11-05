/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:21:31 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 18:55:14 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(const std::string name);
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
