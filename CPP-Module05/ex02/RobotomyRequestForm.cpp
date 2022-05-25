#include "RobotomyRequestForm.hpp"

/*
**
** CONSTRUCTEUR
**
*/

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequest" , 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a):
	Form(a), target(a.target)
{
}

/*
**
** DESTRUCTEUR
**
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
**
** OPERATEUR
**
*/

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	(void)a;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "* bruits_de_perceuses.mp3 *" << std::endl;
	if (rand() % 10 > 5)
		std::cout << this->target << " a bien été robotomizée" << std::endl;
	else
		std::cout << this->target << " robotomizée a échoué" << std::endl;
}