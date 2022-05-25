#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private :
		Form();
		std::string name;
		bool _signed;
		int const signGrade;
		int const executeGrade;
	public :
		Form(std::string const &name, int const signGrade, int const executeGrade);
		Form(Form const &a);
		virtual ~Form(void);

		Form &operator=(Form const &a);

		class GradeTooHighException: public std::exception {
			virtual const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what(void) const throw();
		};
		class SignedException: public std::exception {
			virtual const char* what(void) const throw();
		};

		std::string const	&getName(void) const;
		bool				isSigned(void) const;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		void				beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif