/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:17:49 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 14:18:48 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(1)
{
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name),
	grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->grade = rhs.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << "Bureaucrat => " << i.getName() << "\tGrade => " << i.getGrade();
	return (o);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increment(void)
{
	this->grade -= 1;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrement(void)
{
	this->grade += 1;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form &form) const
{
	try {
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch (const std::exception & e) {
		std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
	}
}
