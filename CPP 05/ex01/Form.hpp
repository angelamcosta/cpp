/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:11:23 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 14:26:44 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	const std::string name;
	bool isSigned;
	const int sign;
	const int execute;

  public:
	Form();
	Form(std::string name, int sign, int execute);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &rhs);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high!"; }
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low!"; }
	};

	const std::string getName(void) const;
	bool getSigned(void) const;
	int getSign(void) const;
	int getExecute(void) const;

	void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif