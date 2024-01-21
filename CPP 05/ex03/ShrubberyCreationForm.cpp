/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:51:19 by anlima            #+#    #+#             */
/*   Updated: 2024/01/21 20:42:19 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 147, 137), target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm",
	147, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("ShrubberyCreationForm",
	147, 137), target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	action();
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file;
	std::string filename = this->target + "_shruberry";
	std::string trees =
        "               ,@@@@@@@,\n"
        "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
        "       |o|        | |         | |\n"
        "       |.|        | |         | |\n"
        "jgs \\/ .\\_\\/\\_\\/__/  ,\\_\\/\\/__\\\\/.  \\_\\/\\/__/_";
	file.open(filename.c_str());
	if(!file.is_open())
	{
		std::cout << "Failed to open " << filename << std::endl;
		return ;
	}
	file << trees << std::endl;
	file.close();
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	o << i.getTarget();
	return (o);
}