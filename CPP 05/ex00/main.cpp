/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:43:07 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 13:53:38 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
    try {
        Bureaucrat lela = Bureaucrat("Lela", 1);
        // lela.increment();
        std::cout << lela << std::endl;
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
