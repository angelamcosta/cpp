/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:45:37 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 15:46:44 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : fixed_(0) { }

Fixed::Fixed(const int raw) : fixed_(raw << this->bits_) { }

Fixed::Fixed(const float raw) : fixed_(roundf(raw * (1 << this->bits_))) { }

Fixed::Fixed(const Fixed &other) : fixed_(other.fixed_) { }

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixed_ = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) { }

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_;
}

void Fixed::setRawBits(int const raw) { this->fixed_ = raw << this->bits_; }

float Fixed::toFloat(void) const { return static_cast<float>(this->fixed_) / (1 << bits_); }

int Fixed::toInt(void) const { return this->fixed_ >> this->bits_; }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator<(const Fixed &fixed) const { return this->fixed_ < fixed.getRawBits(); }

bool Fixed::operator>(const Fixed &fixed) const { return this->fixed_ > fixed.getRawBits(); }

bool Fixed::operator==(const Fixed &fixed) const { return this->fixed_ == fixed.getRawBits(); }

bool Fixed::operator!=(const Fixed &fixed) const { return this->fixed_ != fixed.getRawBits(); }

bool Fixed::operator<=(const Fixed &fixed) const { return this->fixed_ <= fixed.getRawBits(); }

bool Fixed::operator>=(const Fixed &fixed) const { return this->fixed_ >= fixed.getRawBits(); }

Fixed Fixed::operator+(const Fixed &fixed) const { return this->toFloat() + fixed.toFloat(); }

Fixed Fixed::operator-(const Fixed &fixed) const { return this->toFloat() - fixed.toFloat(); }

Fixed Fixed::operator*(const Fixed &fixed) const { return this->toFloat() * fixed.toFloat(); }

Fixed Fixed::operator/(const Fixed &fixed) const { return this->toFloat() / fixed.toFloat(); }

Fixed &Fixed::operator++(void)
{
	this->fixed_++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fixed_++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->fixed_--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fixed_--;
	return tmp;
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.getRawBits() > fixed2.getRawBits())
		return fixed1;
	return fixed2;
}
