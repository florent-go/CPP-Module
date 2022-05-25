#include "ShrubberyCreationForm.hpp"

/*
**
** CONSTRUCTEUR
**
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreation" , 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a):
	Form(a), target(a.target)
{
}

/*
**
** DESTRUCTEUR
**
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
**
** OPERATEUR
**
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{
	(void)a;
	return (*this);
}

/*
**
** EXCEPTION
**
*/

const char *ShrubberyCreationForm::CannotOpenFileException::what() const throw()
{
	return ("ShrubberyCreationFormException: Cannot open file");
}

/*
**
** FUNCTION
**
*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream outfile(this->target + "_shrubbery");
	if (!outfile.is_open())
		throw CannotOpenFileException();
	outfile <<	"		/\\			"	<< std::endl
			<<	"	   /\\*\\			"	<< std::endl
   			<<	"	  /\\O\\*\\		"	<< std::endl
			<<	"	 /*/\\/\\/\\		"	<< std::endl
			<<	"	/\\O\\/\\*\\/\\		"	<< std::endl
			<<	"   /\\*\\/\\*\\/\\/\\		"	<< std::endl
			<<	"  /\\O\\/\\/*/\\/O/\\	"	<< std::endl
      		<<	"	 	||			"	<< std::endl
     		<<	"		||			"	<< std::endl
			<<	"	 	||			"	<< std::endl;
	outfile.close();
}