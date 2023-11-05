/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:45:37 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 14:26:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const Fixed &other) : fixed_(other.fixed_) { std::cout << "Copy constructor called" << std::endl; }

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixed_ = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_ = raw << this->bits_;
}
