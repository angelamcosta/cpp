#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>

class PresidentialPardonForm : public AForm
{
  private:
	const std::string target;

  public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void execute(Bureaucrat const &executor) const;
	const std::string getTarget() const;
	void action() const;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif