/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:15 by anlima            #+#    #+#             */
/*   Updated: 2024/01/28 18:26:16 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>

template <typename T> class MutantStack : public std::stack<T, std::vector<T>>
{
  public:
	MutantStack();
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack();
	typedef typename std::vector<T>::iterator iterator;
	iterator begin();
	iterator end();
};

# include "MutantStack.tpp"

#endif