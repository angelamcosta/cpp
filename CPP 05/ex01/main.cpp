/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:43:07 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 14:29:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
    try {
        Bureaucrat lela = Bureaucrat("Lela", 2);
        Form form = Form("form", 1, 1);
        // lela.increment();
        lela.signForm(form);
        // std::cout << lela << std::endl;
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
