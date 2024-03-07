/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:11:12 by anlima            #+#    #+#             */
/*   Updated: 2024/03/07 17:40:13 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
# define PMERGEME_TPP

#include "PmergeMe.hpp"

template <class T>
PmergeMe<T>::PmergeMe() {}

template <class T>
PmergeMe<T>::~PmergeMe() {}

template <class T>
PmergeMe<T>::PmergeMe(PmergeMe const &copy) { *this = copy; }

template <class T>
PmergeMe<T>::PmergeMe(std::vector<T> vector)
{
    _vector = vector;
}

template <class T>
PmergeMe<T> &PmergeMe<T>::operator=(PmergeMe const &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

template <class T>
void	PmergeMe<T>::mergeSort(std::vector<T> vector)
{
    if (vector.size() < 2)
        return ;
    
    int mid = vector.size() / 2;
    std::vector<T> left(vector.begin(), vector.end() - mid);
    std::vector<T> right(vector.begin() + mid, vector.end());
    
    mergeSort(left);
    mergeSort(right);
    merge(left, right);
}

template <class T>
void	PmergeMe<T>::sort()
{
    std::cout << "Before:\t";
    for (unsigned long i = 0; i < _vector.size(); ++i)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;
    mergeSort(_vector);
    std::cout << "After:\t";
    for (unsigned long i = 0; i < _vector.size(); ++i)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;
}

template <class T>
void	PmergeMe<T>::merge(std::vector<T> left, std::vector<T> right)
{
    int leftSize = left.size();
    int rightSize = right.size();
    
    int i = 0, j = 0, k = 0;
    
    while (j < leftSize && k < rightSize)
    {
        if (left[j] < right[k])
            _vector[i++] = left[j++];
        else
            _vector[i++] = right[k++];
    }

    while (j < leftSize)
        _vector[i++] = left[j++];
    while (j < rightSize)
        _vector[i++] = right[k++];
}

#endif