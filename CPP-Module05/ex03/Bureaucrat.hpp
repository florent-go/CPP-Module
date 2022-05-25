#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdio>
class Form;

class Bureaucrat
{
	private :
		std::string	name;
		int			grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &a);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const &rhs);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		std::string const &getName(void) const;
		int getGrade(void) const;

		void incrementGrade(void);
		void decrementGrade(void);

		void signForm(Form &form) const;
		void executeForm(Form const & form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif