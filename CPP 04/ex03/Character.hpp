/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:47:30 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 23:54:56 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		virtual ~Character();
		Character &operator=(Character const &rhs);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
