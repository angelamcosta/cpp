/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:41:59 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 20:35:58 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
  public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern &operator=(Intern const &rhs);
	AForm *makeForm(std::string name, std::string target);

	class couldNotCreateForm : public std::exception {
		public:
			virtual const char* what() const throw() { return "Form type not found."; }
	};
};

#endif