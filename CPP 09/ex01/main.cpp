/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:44 by anlima            #+#    #+#             */
/*   Updated: 2024/03/12 17:17:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char**argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage => ./RPN \"<valid RPN expression>\"" << std::endl;
        return (1);
    }
    try {
        RPN rpn;

        std::string temp = argv[1];
        for (unsigned long j = 0; j < temp.length(); ++j)
            if (temp[j] != ' ' && temp[j] != '\0') 
            {
                if (isdigit(temp[j]) && isdigit(temp[j + 1]))
                    throw std::out_of_range("Error: nb is equal or greater than 10");
                if (isdigit(temp[j]))
                    rpn.add(temp[j] - '0');
                else
                    rpn.calculate(temp[j]);
            }
        rpn.getTotal();
        
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
