/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:15 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 14:39:09 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>

template <typename T> class MutantStack : public std::stack<T, std::deque<T> >
{
  public:
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();
	typedef typename std::deque<T>::iterator iterator;
	iterator begin();
	iterator end();
};

# include "MutantStack.tpp"

#endif