/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:41:17 by anlima            #+#    #+#             */
/*   Updated: 2023/11/13 16:00:42 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << PURPLE << "[Brain]" << CLEAR << " Contructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << PURPLE << "[Brain]" << CLEAR << " Copy contructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << PURPLE << "[Brain]" << CLEAR << " Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << PURPLE << "[Brain]" << CLEAR << " Copy assignment contructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
