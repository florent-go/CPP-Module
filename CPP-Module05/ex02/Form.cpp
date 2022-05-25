#include "Form.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Form::Form(void): signGrade(5), executeGrade(5)
{
}

Form::Form(std::string const &name, int const signGrade, int const executeGrade) : signGrade(signGrade), executeGrade(executeGrade)
{
	this->name = name;
	this->_signed = false;
	std::cout << "Paramétrique constructor Form " << this->name << " called" << std::endl;
	if (signGrade < 1|| executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &a) : signGrade(a.signGrade), executeGrade(a.executeGrade)
{
	this->name = a.name;
	this->_signed = a._signed;
	std::cout << "Copy constructor Form " << this->name << " called" << std::endl;
	if (signGrade < 1|| executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

/*
**
** DESTRUCTEUR
**
*/

Form::~Form()
{
	std::cout << "Destructor Form " << this->name << " called" << std::endl;
}

/*
**
** OPERATOR ASSIGNATION
**
*/

Form &Form::operator=(Form const &a)
{
	this->name = a.name;
	this->_signed = a._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " " << ((form.isSigned()) ? "Signed" : "Unsigned")
		<< " Sign:" << form.getSignGrade() << " Execute: "
		<< form.getExecuteGrade();
	return (out);
}

/*
**
** EXCEPTION
**
*/

const char *Form::GradeTooHighException::what() const throw()
{
	return ("FormError: Grade too Hight");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("FormError: Grade too Low");
}

const char *Form::SignedException::what() const throw()
{
	return ("FormError: Already Signed");
}

const char *Form::UnsignedFormException::what() const throw()
{
	return ("FormError: Form is not Signed");
}

/*
**
** FUNCTION
**
*/

std::string const &Form::getName(void) const
{
	return (this->name);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::SignedException();
	this->_signed = true;
}

bool Form::isSigned(void) const
{
	return (this->_signed);
}

int		Form::getSignGrade(void) const
{
	return (this->signGrade);
}

int		Form::getExecuteGrade(void) const
{
	return (this->executeGrade);
}

void Form::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->executeGrade)
		throw Form::GradeTooLowException();
	if (!this->_signed)
		throw Form::UnsignedFormException();
}
