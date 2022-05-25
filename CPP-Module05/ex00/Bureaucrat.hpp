#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif