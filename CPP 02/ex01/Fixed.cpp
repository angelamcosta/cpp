/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:45:37 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 14:52:17 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : fixed_(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int raw) : fixed_(raw << this->bits_) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(const float raw) : fixed_(roundf(raw * (1 << this->bits_))) { std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed(const Fixed &other) : fixed_(other.fixed_) {
	std::cout << "Copy constructor called" << std::endl; }

Fixed &Fixed::operator=(const Fixed &other)
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

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixed_) / (1 << bits_);
}

int Fixed::toInt(void) const
{
	return this->fixed_ >> this->bits_;
}

std::ostream & operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
