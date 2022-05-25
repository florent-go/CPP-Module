#include "Intern.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Intern::Intern(void)
{
	this->tab[0] = "Presidential Pardon";
	this->tab[1] = "Robotomy Request";
	this->tab[2] = "Shrubbery Creation";
}

Intern::Intern(Intern const &a)
{
	(void)a;
}

/*
**
** DESTRUCTEUR
**
*/

Intern::~Intern()
{
}

/*
**
** OPERATEUR
**
*/

Intern &Intern::operator=(Intern const &a)
{
	(void)a;
	return (*this);
}

/*
**
** Exception
**
*/

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "InternException: Form does not exist";
}

/*
**
**	FUNCTION
**
*/

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	Form *form = nullptr;

	for (int i = 0; i < 3; i++)
	{
		if (formName == this->tab[i])
		{
			switch (i)
			{
			case 0 :
				form = new PresidentialPardonForm(target);
				break;
			case 1 :
				form = new RobotomyRequestForm(target);
				break ;
			case 2 :
				form = new ShrubberyCreationForm(target);
				break ;
			default:
				break;
			}
		}
	}
	if (form == nullptr)
		throw Intern::FormDoesNotExistException();
	else
		std::cout << "Intern creates " << *form << std::endl;
	return (form);
}