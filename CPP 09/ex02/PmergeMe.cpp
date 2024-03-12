/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:11:12 by anlima            #+#    #+#             */
/*   Updated: 2024/03/12 15:25:36 by anlima           ###   ########.fr       */
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

PmergeMe::PmergeMe(int argc, char**argv)
{
    std::vector<int> vector;
    for (int i = 1; i < argc; ++i)
    {
        if (argv[i] != NULL && *argv[i] != '\0')
        {
            std::istringstream is(argv[i]);
            int value;
            is >> value;
            if (is.eof())
                vector.push_back(value);
        }
    }
    
    std::list<int> list;
    for (int i = 1; i < argc; ++i)
    {
        if (argv[i] != NULL && *argv[i] != '\0')
        {
            std::istringstream is(argv[i]);
            int value;
            is >> value;
            if (is.eof())
                list.push_back(value);
        }
    }

    std::cout << "Before (vector):\t";
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Before (list):\t";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    mergeSort(list);
    mergeSort(vector);

    std::cout << "After (vector):\t";
    for (unsigned long i = 0; i < _vector.size(); ++i)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;

    std::cout << "After (list):\t";
    for (std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}


void PmergeMe::mergeSort(std::vector<int> &vector)
{
    if (vector.size() < 2)
        return;

    int mid = vector.size() / 2;
    std::vector<int> left(vector.begin(), vector.begin() + mid);
    std::vector<int> right(vector.begin() + mid, vector.end());

    mergeSort(left);
    mergeSort(right);
    merge(left, right);
}

void PmergeMe::mergeSort(std::list<int> &list)
{
    if (list.size() < 2)
        return;

    std::list<int> left;
    std::list<int> right;

    std::list<int>::iterator it = list.begin();

    unsigned long mid = list.size() / 2;
    for (unsigned long i = 0; i < mid; ++i)
        left.push_back(*it++);
    for (unsigned long i = mid; i < list.size(); ++i)
        right.push_back(*it++);

    mergeSort(left);
    mergeSort(right);
    merge(left, right);
}

void PmergeMe::merge(std::vector<int> &left, std::vector<int> &right)
{
    std::vector<int> merged;

    while (!left.empty() && !right.empty())
    {
        if (left.front() <= right.front())
        {
            std::cout << left.front() << std::endl;
            merged.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            std::cout << right.front() << std::endl;
            merged.push_back(right.front());
            right.erase(right.begin());
        }
    }

    merged.insert(merged.end(), left.begin(), left.end());
    merged.insert(merged.end(), right.begin(), right.end());

    _vector = merged;
}

void PmergeMe::merge(std::list<int> &left, std::list<int> &right)
{
    std::list<int> merged;

    while (!left.empty() && !right.empty())
    {
        if (*left.begin() <= *right.begin())
        {
            merged.push_back(*left.begin());
            left.pop_front();
        }
        else
        {
            merged.push_back(*right.begin());
            right.pop_front();
        }
    }
    
    merged.splice(merged.end(), left);
    merged.splice(merged.end(), right);

    _list = merged;
}
