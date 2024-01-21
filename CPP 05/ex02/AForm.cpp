/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:01:01 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 14:27:24 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), isSigned(false), sign(1), exec(1)
{
}

AForm::AForm(std::string name, int sign, int exec) : name(name), isSigned(false), sign(sign), exec(exec)
{
}

AForm::AForm(const AForm &src) : name(src.name), isSigned(false), sign(src.sign),
	exec(src.exec)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
	{
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << i.getName();
	return (o);
}

const std::string AForm::getName(void) const { return (this->name); }
bool	AForm::getSigned(void) const { return (this->isSigned); }
int	AForm::getSign(void) const { return (this->sign); }
int	AForm::getExecute(void) const { return (this->exec); }

void		AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->sign)
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->exec)
		throw GradeTooLowException();
	if (!this->isSigned)
		throw FormNotSignedException();
}
