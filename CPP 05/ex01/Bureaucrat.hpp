/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:17:52 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 14:16:07 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{
  protected:
	const std::string name;
	int grade;

  public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too high!"; }
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Grade too low!"; }
	};

	const std::string getName() const;
	int getGrade() const;
	
	void increment(void);
	void decrement(void);

	void signForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif