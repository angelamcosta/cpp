/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:19:55 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 17:44:11 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm",
	72, 45), target(src.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	action();
}

void RobotomyRequestForm::action(void) const
{
	std::cout << DRILL << std::endl;
	if (std::rand() % 2 == 0)
        std::cout << getName() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed for " << getName() << "." << std::endl;
}

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	o << i.getTarget();
	return (o);
}
