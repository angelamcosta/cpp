/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:08:10 by anlima            #+#    #+#             */
/*   Updated: 2024/01/25 17:41:59 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n)
{
	this->size = n;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->size = other.size;
		this->data = other.data;
	}
	return (*this);
}

Span::~Span(){};

void Span::addNumber(int number)
{
	if (this->data.size() == this->size)
		throw std::out_of_range("The vector is full!");
	this->data.push_back(number);
}

int Span::shortestSpan(void)
{
	int	shortest;
	int	diff;

	if (this->data.size() <= 1)
		throw std::out_of_range("The vector is too small to calculate the shortest span!");
	shortest = INT_MAX;
	for (unsigned int i = 0; i < this->data.size(); ++i)
	{
		for (unsigned int j = 0; j < this->data.size(); ++j)
		{
			if (i == j)
				continue ;
			diff = std::abs(this->data[i] - this->data[j]);
			if (diff < shortest)
				shortest = diff;
		}
	}
	return (shortest);
}

int Span::longestSpan(void)
{
	int longest;
	int diff;

	if (this->data.size() <= 1)
		throw std::out_of_range("The vector is too small to calculate the shortest span!");
	longest = INT_MIN;
	for (unsigned int i = 0; i < this->data.size(); ++i)
	{
		for (unsigned int j = 0; j < this->data.size(); ++j)
		{
			if (i == j)
				continue ;
			diff = std::abs(this->data[i] - this->data[j]);
			if (diff > longest)
				longest = diff;
		}
	}
	return (longest);
}