/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:01:01 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 21:14:22 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), isSigned(false), sign(1), execute(1)
{
}

Form::Form(std::string name, int sign, int execute) : name(name), isSigned(false), sign(sign), execute(execute)
{
}

Form::Form(const Form &src) : name(src.name), isSigned(false), sign(src.sign),
	execute(src.execute)
{
}

Form::~Form()
{
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->isSigned = rhs.isSigned;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form: " << i.getName() << ", Signed: " << (i.getSigned() ? "Yes" : "No") << ", Sign Grade: " << i.getSign() << ", Execute Grade: " << i.getExecute();
    return o;
}

const std::string Form::getName(void) const { return (this->name); }
bool	Form::getSigned(void) const { return (this->isSigned); }
int	Form::getSign(void) const { return (this->sign); }
int	Form::getExecute(void) const { return (this->execute); }

void		Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->sign)
	{
		if (this->isSigned == true)
			throw FormAlreadySigned();
		this->isSigned = true;
	}
	else
		throw Form::GradeTooLowException();
}
