/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:10 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 19:23:35 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
// Color macros
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define CLEAR "\033[0m"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();
		Animal &operator=(Animal const &rhs);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
