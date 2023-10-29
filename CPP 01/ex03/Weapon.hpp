/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:16:41 by anlima            #+#    #+#             */
/*   Updated: 2023/10/29 21:26:11 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	private:
		std::string	type_;
	public:
		Weapon(void);
		Weapon(const std::string& type);
		const	std::string& getType(std::string type);
		void	setType(const std::string& type);
}

#endif