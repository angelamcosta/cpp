/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:12:23 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 23:59:53 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &rhs);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif
