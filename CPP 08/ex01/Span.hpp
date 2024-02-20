/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:55:53 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 15:00:31 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <climits>
# include <cstdlib>
# include <iostream>
# include <vector>

class Span
{
  private:
	std::vector<int> data;
	unsigned int size;
	Span();

  public:
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	// TODO : Last but not least, it would be wonderful to fill your Span using a range of iterators.
	// Making thousands calls to addNumber() is so annoying. Implement a member function
	// to add many numbers to your Span in one call.
};

#endif
