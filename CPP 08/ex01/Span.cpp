/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:08:10 by anlima            #+#    #+#             */
/*   Updated: 2024/03/11 13:34:52 by anlima           ###   ########.fr       */
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
		throw std::out_of_range("The vector is full");
	this->data.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->data.size() == this->size)
		throw std::out_of_range("The vector is full");
	size_t size = std::distance(begin, end);
	if (this->size < this->data.size() + size)
		throw std::out_of_range("The vector won't fit all the numbers you're trying to add");
	data.insert(data.end(), begin, end);
}

int Span::shortestSpan(void)
{
	if (this->data.size() <= 1)
		throw std::out_of_range("The vector is too small to calculate the shortest span!");
	std::vector<int> copy = data;
	std::sort(copy.begin(), copy.end());
	int shortest = copy[1] - copy[0];
	for (std::vector<int>::iterator i = copy.begin(); i != copy.end() - 1; ++i)
	{
		if (abs(*(i + 1) - *i) < shortest)
			shortest = abs(*(i + 1) - *i);
	}
	return (shortest);
}

int Span::longestSpan(void)
{
	if (this->data.size() <= 1)
		throw std::out_of_range("The vector is too small to calculate the shortest span!");
	int	min = *std::min_element(data.begin(), data.end());
	int max = *std::max_element(data.begin(), data.end());
	return (abs(max - min));
}
