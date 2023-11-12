/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:59:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 21:24:53 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define N_PETS 4

int main()
{
	int i = 0;
	const Animal *pets[N_PETS];

	while (i < N_PETS / 2)
		pets[i++] = new Dog();
	while (i < N_PETS)
		pets[i++] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < N_PETS; i++)
	{
		if (i < N_PETS / 2)
		{
			const Dog *dog = (const Dog *)pets[i];
			const Brain *originalBrain = dog->getBrain();
			const Brain *copiedBrain = new Brain(*dog->getBrain());
			bool deepCopyCheck = (originalBrain != copiedBrain);
			std::cout << "Is Dog's Brain a deep copy? " << (deepCopyCheck ? "Yes" : "No") << std::endl;
			delete copiedBrain;
		}
		else
		{
			const Cat *cat = (const Cat *)pets[i];
			const Brain *originalBrain = cat->getBrain();
			const Brain *copiedBrain = new Brain(*cat->getBrain());
			bool deepCopyCheck = (originalBrain != copiedBrain);
			std::cout << "Is Cat's Brain a deep copy? " << (deepCopyCheck ? "Yes" : "No") << std::endl;
			delete copiedBrain;
		}
		delete pets[i];
		std::cout << std::endl;
	}
	return (0);
}
