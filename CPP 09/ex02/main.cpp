/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:44 by anlima            #+#    #+#             */
/*   Updated: 2024/03/07 17:39:36 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "PmergeMe.hpp"

int main(int argc, char**argv)
{
    std::vector<int> _vector;
    for (int i = 1; i < argc; ++i)
    {
        int value = std::atoi(argv[i]);
        if (!value && argv[i])
        {
            std::cout << "Error" << std::endl;
            return (1);
        }
        _vector.push_back(value);
    }

    PmergeMe<int> algo(_vector);
    algo.sort();
}
