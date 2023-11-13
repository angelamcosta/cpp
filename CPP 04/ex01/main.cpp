/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:59:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 16:21:20 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define N_PETS 4

int main()
{
	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);
	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat(*cat1);
	Animal *pets[N_PETS];

	pets[0] = dog1;
	pets[1] = dog2;
	pets[2] = cat1;
	pets[3] = cat2;
	std::cout << std::endl;
	for (int i = 0; i < N_PETS; i++)
	{
		Brain *brain = pets[i]->getBrain();
		std::cout << brain << std::endl;
		delete pets[i];
		std::cout << std::endl;
	}
	return (0);
}
