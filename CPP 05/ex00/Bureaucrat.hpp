/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:17:52 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 20:54:59 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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

	// we overload the what() function of the std::exception class to return
	// our error message and the throw() specification specifies that we will not throw
	// any other exceptions besides the exception type it is associated with
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
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif