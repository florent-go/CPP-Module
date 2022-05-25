#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm(void);

	std::string const &target;
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &a);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm &operator=(PresidentialPardonForm const &a);

	void	execute(Bureaucrat const &executor) const;
};

#endif