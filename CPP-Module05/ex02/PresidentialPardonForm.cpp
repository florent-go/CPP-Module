#include "PresidentialPardonForm.hpp"

/*
**
** CONSTRUCTEUR
**
*/

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("Presidential Pardon" , 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a):
	Form(a), target(a.target)
{
}

/*
**
** DESTRUCTEUR
**
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
**
** OPERATEUR
**
*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	(void)a;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " a été pardonnée par Zafod Beeblebrox" << std::endl;
}