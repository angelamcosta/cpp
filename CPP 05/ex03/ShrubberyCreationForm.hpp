/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:19:38 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 17:47:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <iostream>
# include <string>

class ShrubberyCreationForm : public AForm
{
  private:
	const std::string target;

  public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const &executor) const;
	const std::string getTarget() const;
	void action() const;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);

#endif