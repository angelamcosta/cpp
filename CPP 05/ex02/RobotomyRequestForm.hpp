/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:19:41 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 17:47:01 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>
# include <iostream>
# include <string>
# define DRILL "*Bzzz* *Drrrr* *Vrrrr*"

class RobotomyRequestForm : public AForm
{
  private:
	const std::string target;

  public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	void execute(Bureaucrat const &executor) const;
	const std::string getTarget() const;
	void action() const;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);

#endif