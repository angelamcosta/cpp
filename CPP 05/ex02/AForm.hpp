/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:11:23 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 19:37:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
  private:
	const std::string name;
	bool isSigned;
	const int sign;
	const int exec;

  public:
	AForm();
	AForm(std::string name, int sign, int execute);
	AForm(AForm const &src);
	virtual ~AForm();

	AForm &operator=(AForm const &rhs);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high!"; }
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low!"; }
	};
	class FormAlreadySignedException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Form has already been signed!"; }
	};
	class FormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Form has not been been signed!"; }
	};

	const std::string getName(void) const;
	bool getSigned(void) const;
	int getSign(void) const;
	int getExecute(void) const;

	void beSigned(Bureaucrat bureaucrat);
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, AForm const &i);

#endif