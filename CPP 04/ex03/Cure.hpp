/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:47:50 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 23:55:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		virtual ~Cure();
		Cure &operator=(Cure const &rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
