/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:25:29 by anlima            #+#    #+#             */
/*   Updated: 2024/01/25 14:45:22 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T> class Array
{
  private:
	T *array;
	unsigned int len;

  public:
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array &operator=(const Array &rhs);
	~Array();
	T &operator[](unsigned int index);
	unsigned int size() const;
};

# include "Array.tpp"

#endif
