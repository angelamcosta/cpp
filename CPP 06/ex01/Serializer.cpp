/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:09:10 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 14:34:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &serializer)
{
	*this = serializer;
}

Serializer::~Serializer()
{
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	std::uintptr_t new_ptr = reinterpret_cast<std::uintptr_t>(ptr);
	return (new_ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}
