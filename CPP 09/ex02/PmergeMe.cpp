/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:11:12 by anlima            #+#    #+#             */
/*   Updated: 2024/06/04 11:47:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
    this->_list = copy._list;
    this->_vector = copy._vector;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy)
{
    if (this != &copy)
    {
        this->_list = copy._list;
        this->_vector = copy._vector;
    }
    return (*this);
}

PmergeMe::PmergeMe(std::vector<int> &vector, std::list<int> &list)
{
    std::cout << "Before (vector):\t";
    this->print(vector);
    std::cout << "Before (list):\t\t";
    this->print(list);
    
    std::clock_t begin_l = std::clock();
    mergeSort(list);
    std::clock_t end_l = std::clock();
    double time_l = static_cast<double>(end_l - begin_l) / CLOCKS_PER_SEC * 1000000;
    std::clock_t begin_v = std::clock();
    mergeSort(vector);
    std::clock_t end_v = std::clock();
    double time_v = static_cast<double>(end_v - begin_v) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After (vector):\t\t";
    this->print(vector);
    std::cout << "After (list):\t\t";
    this->print(list);

    std::cout << "\n\nTime to process a range of " << _list.size() << " elements with std::list : " << time_l << " us" << std::endl;
    std::cout << "\n\nTime to process a range of " << _list.size() << " elements with std::vector : " << time_v << " us" << std::endl;
}

void PmergeMe::print(std::vector<int> &vector)
{
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::print(std::list<int> &list)
{
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::mergeSort(std::vector<int> &vector)
{
    if (vector.size() < 2)
        return ;

    int mid = vector.size() / 2;

    std::vector<int> left(vector.begin(), vector.begin() + mid);
    std::vector<int> right(vector.begin() + mid, vector.end());
    
    mergeSort(left);
    mergeSort(right);

    sort(left, right, vector);

    _vector = vector;
}

void PmergeMe::sort(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vector)
{
    int i = 0;
    while (!left.empty() && !right.empty())
    {
        if (*left.begin() < *right.begin())
        {
            vector[i++] = left.front();
            left.erase(left.begin());
        }
        else
        {
            vector[i++] = right.front();
            right.erase(right.begin());
        }
    }

    while (!left.empty())
    {
        vector[i++] = left.front();
        left.erase(left.begin());
    }
    while (!right.empty())
    {
        vector[i++] = right.front();
        right.erase(right.begin());
    }
}

void PmergeMe::mergeSort(std::list<int> &list)
{
    if (list.size() < 2)
        return ;

    int mid = list.size() / 2;

    std::list<int> left;
    std::list<int> right;

    std::list<int>::iterator it = list.begin();
    
    for (int i = 0; i < mid; ++i)
        left.push_back(*it++);

    for (unsigned long i = mid; i < list.size(); ++i)
        right.push_back(*it++);

    mergeSort(left);
    mergeSort(right);

    sort(left, right, list);

    _list = list;
}

void PmergeMe::sort(std::list<int> &left, std::list<int> &right, std::list<int> &list)
{
    std::list<int>::iterator it = list.begin();
    while (!left.empty() && !right.empty())
    {
        if (*left.begin() < *right.begin())
        {
            *it++ = left.front();
            left.erase(left.begin());
        }
        else
        {
            *it++ = right.front();
            right.erase(right.begin());
        }
    }

    while (!left.empty())
    {
        *it++ = left.front();
        left.erase(left.begin());
    }
    while (!right.empty())
    {
        *it++ = right.front();
        right.erase(right.begin());
    }
}
