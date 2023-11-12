/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:59:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 21:43:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define N_PETS 4

int main()
{
	//const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	//std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//meta->makeSound();
	delete j;
	delete i;
	//delete meta;
	std::cout << std::endl;

	return (0);
}
