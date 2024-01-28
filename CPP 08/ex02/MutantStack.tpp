/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:26:12 by anlima            #+#    #+#             */
/*   Updated: 2024/01/28 18:26:13 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <class T> MutantStack<T>::MutantStack() : std::stack<T,
	std::vector<T>>()
{
}

template <class T> MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T,
	std::vector<T>>(other)
{
}

template <class T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T, std::vector<T>>::operator=(other);
	return (*this);
}

template <class T> MutantStack<T>::~MutantStack()
{
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
