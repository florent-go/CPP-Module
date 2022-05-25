#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Bureaucrat::Bureaucrat(void)
{
	this->name = "Bob";
	this->grade = 149;
	std::cout << "Default constructor Bureaucrat " << this->name << " called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
	this->name = name;
	this->grade = grade;
	std::cout << "Paramétrique constructor Bureaucrat " << this->name << " called" << std::endl;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &a)
{
	this->name = a.name;
	this->grade = a.grade;
	std::cout << "Copy constructor Bureaucrat " << this->name << "called" << std::endl;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*
**
** DESTRUCTEUR
**
*/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat " << this->name << " called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &a)
{
	std::cout << "Assignation operator Bureaucrat " << this->name << " called" << std::endl;
	this->name = a.name;
	this->grade = a.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}

/*
**
** EXCEPTION
**
*/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratError: Grade too Hight");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratError: Grade too Low");
}
/*
**
** FUNCTION
**
*/

std::string	const &Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signeForm(Form &form) const
{
	if (form.isSigned() == true)
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << *this << " cannot sign " << form
				<< " because, grade is to low." << std::endl;
	}
	else
		std::cout << *this << " signs " << form << std::endl;
}