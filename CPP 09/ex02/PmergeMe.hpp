/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:06:26 by anlima            #+#    #+#             */
/*   Updated: 2024/03/07 17:37:27 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <iostream>

template <class T>
class PmergeMe {
    private:
        std::vector<T>	_vector;
    
    public:
		PmergeMe();
        ~PmergeMe();
        PmergeMe(PmergeMe const &copy);
        PmergeMe(std::vector<T>	_vector);
        PmergeMe &operator=(PmergeMe const &copy);

		void	sort();
        void	mergeSort(std::vector<T> vector);
		void	merge(std::vector<T> left, std::vector<T> right);
};

#include "PmergeMe.tpp"

#endif