#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <limits>

class	Span
{
	private:
		std::vector<int>	container;
		unsigned int	 	N;
		unsigned int		i;
	public:
		Span(void);
		Span(unsigned int N);
		Span(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);
		Span(Span const &a);
		~Span(void);

		Span & operator=(Span const &a);

		void	addNumber(int num);
		int		shortestSpan(void);
		int		longestSpan(void);

		class CF : public std::exception {
			virtual const char* what() const throw ();
		};
		class NNS : public std::exception {
			virtual const char* what() const throw ();
		};
		class SI : public std::exception {
			virtual const char* what() const throw ();
		};
};

#endif