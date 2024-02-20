/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:12 by anlima            #+#    #+#             */
/*   Updated: 2024/02/20 14:39:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <class T> MutantStack<T>::MutantStack() : std::stack<T,
	std::deque<T> >()
{
}

template <class T> MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T,
	std::deque<T> >(other)
{
}

template <class T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T, std::deque<T> >::operator=(other);
	return (*this);
}

template <class T> MutantStack<T>::~MutantStack()
{
}

template <class T> typename std::deque<T>::iterator MutantStack<T>::begin(void)
{
	return (std::stack<T, std::deque<T> >::c.begin());
}

template <class T> typename std::deque<T>::iterator MutantStack<T>::end(void)
{
	return (std::stack<T, std::deque<T> >::c.end());
}

#endif
