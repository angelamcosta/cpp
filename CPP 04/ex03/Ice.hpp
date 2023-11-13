/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:48:50 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 23:55:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		virtual ~Ice();
		Ice &operator=(Ice const &rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif