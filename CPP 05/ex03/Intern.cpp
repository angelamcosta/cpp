/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:20:45 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 21:12:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)(rhs);
	return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm	*form;

	form = NULL;
	if (name == "presidential request")
		form = new PresidentialPardonForm(target);
	else if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "shrubbery request")
		form = new ShrubberyCreationForm(target);
	else
	{
		std::cout << "Intern could not create " + name + " form" << std::endl;
		throw CouldNotCreateFormException();
	}
	std::cout << "Intern creates " << name << " form" << std::endl;
	return (form);
}
