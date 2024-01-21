/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:27:21 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 17:44:22 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",
	25, 5), target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",
	25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardonForm",
	25, 5), target(src.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	action();
}

void PresidentialPardonForm::action(void) const 
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	o << i.getTarget();
	return (o);
}