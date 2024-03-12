/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:44 by anlima            #+#    #+#             */
/*   Updated: 2024/03/12 17:04:09 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 1)
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
        PmergeMe algo(vector, list);
    }
    return (0);
}
