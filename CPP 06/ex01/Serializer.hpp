/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:57:37 by anlima            #+#    #+#             */
/*   Updated: 2024/01/29 12:39:17 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <iostream>
# include <stdint.h>

class Serializer
{
  private:
	Serializer();
	Serializer(const Serializer &serializer);

  public:
	~Serializer();
	Serializer &operator=(Serializer const &rhs);
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};

#endif

// serialization
// often used in low-level programming
// situations where we would need to store or
// transmit the value of a pointer in a way that doesnt
// involve where the actual data it points to

// uintptr_t
// is a fixed width unsigend integer type defined
// to be large enough to hold the value of a pointer
// is a way to perform interger-based operations on pointers
