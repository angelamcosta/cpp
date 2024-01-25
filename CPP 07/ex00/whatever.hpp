/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:02:24 by anlima            #+#    #+#             */
/*   Updated: 2024/01/24 18:35:21 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

// template <typename T> means that the code
// can be used with different types
// the T acts as a placeholder for the type
template <typename T> void swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T> T min(T &a, T &b)
{
	return ((b < a) ? b : a);
}

template <typename T> T max(T &a, T &b)
{
	return ((b > a) ? b : a);
}

#endif
