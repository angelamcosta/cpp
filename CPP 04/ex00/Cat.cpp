/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:13 by anlima            #+#    #+#             */
/*   Updated: 2023/11/12 18:31:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "cat";
}

Cat::Cat(const Cat &src)
{
	this->type = src.getType();
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if ( this != &rhs )
		this->type = rhs.getType();
	return *this;
}
