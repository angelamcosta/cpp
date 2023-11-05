/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:54:26 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 16:11:21 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x_(0), y_(0) {}

Point::Point(float x, float y) : x_(x), y_(y) {}

Point::Point(const Point &other) : x_(other.x_), y_(other.y_) {}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed) this->x_ = other.getX();
		(Fixed) this->y_ = other.getY();
	}
	return (*this);
}

Point::~Point(void) {}

Fixed Point::getX(void) const { return this->x_; }

Fixed Point::getY(void) const { return this->y_; }
