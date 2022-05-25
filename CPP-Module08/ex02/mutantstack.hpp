#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <limits>
# include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void)
		{
			std::stack<T>();
		}
		MutantStack(MutantStack const &a) : std::stack<T>(a)
		{
		}
		~MutantStack(void) { }

		typedef typename std::deque<T>::iterator iterator;

		iterator	begin(void)
		{
			return(this->c.begin());
		};
		iterator	end(void)
		{
			return(this->c.end());
		};

		MutantStack &operator=(MutantStack &a)
		{
			this->c = a.c;
			return (*this);
		};
};

#endif