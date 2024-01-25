/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:07:17 by anlima            #+#    #+#             */
/*   Updated: 2024/01/25 14:53:36 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <class T> Array<T>::Array()
{
	this->array = new T[0];
	this->len = 0;
}

template <class T> Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->len = n;
}

template <class T> Array<T>::Array(const Array &copy)
{
	unsigned int	len;

	len = copy.size();
	this->array = new T[len];
	this->len = len;
	for (unsigned int i = 0; i < len; i++)
		this->array[i] = copy.array[i];
}

template <class T> Array<T> &Array<T>::operator=(const Array &rhs)
{
	unsigned int	len;

	len = rhs.size();
	delete[] this->array;
	this->array = new T[len];
	this->len = len;
	for (unsigned int i = 0; i < len; i++)
		this->array[i] = rhs[i];
	return (*this);
}

template <class T> Array<T>::~Array()
{
	delete[] this->array;
}

template <class T> T &Array<T>::operator[](unsigned int index)
{
	if (index < this->len)
		return (this->array[index]);
	else
		throw std::out_of_range("Index out of bounds.");
}

template <class T> unsigned int Array<T>::size(void) const
{
	return (this->len);
}

#endif
