/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:43:07 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 19:38:42 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Lela", 1);

        ShrubberyCreationForm shrubberyForm("Garden");
        RobotomyRequestForm robotomyForm("Target");
        PresidentialPardonForm pardonForm("Person");

        std::cout << bureaucrat << std::endl;
        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);

        std::cout << bureaucrat << std::endl;
        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        bureaucrat.executeForm(shrubberyForm);

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

