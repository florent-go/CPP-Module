#include "Span.hpp"

/*
**
** Constructeur
**
*/

Span::Span(void)
{
	this->N = 0;
	this->i = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
	this->i = 0;
}

Span::Span( std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite )
{
	int	j = 0;
	i = 0;
	N = 0;
	for ( ; it != ite ; it++)
	{
		N++;
		addNumber(j++);
	}
}

Span::Span(Span const &a)
{
	*this = a;
}

/*
**
** Destructeur
**
*/

Span::~Span(void)
{
}

/*
**
** Assignation operator
**
*/

Span & Span::operator=(Span const &a)
{
	this->container = a.container;
	this->N = a.N;
	return (*this);
}

/*
**
** Execpetion
**
*/

const char* Span::CF::what() const throw ()
{
	return ("Exception: Container Full");
}

const char* Span::NNS::what() const throw ()
{
	return ("Exception: Span: Not Number Stored");
}

const char* Span::SI::what() const throw ()
{
	return ("Exception: Span: Size Invalid");
}

/*
**
** Function
**
*/

int		Span::shortestSpan()
{
	std::vector<int>::const_iterator	it = container.begin();
	std::vector<int>::const_iterator	ite = container.end();

	if (this->N == 0 || this->N == 1)
		throw SI();
	if (this->i == 0 || this->i == 1)
		throw NNS();
	int j = -1;
	std::sort(container.begin(), container.end());

	it++;
	for (; it != ite; it++)
	{
		if (j == -1 || j > (*it - (*(it - 1))))
		{
			j = (*it - (*(it - 1)));
		}
	}
	return (j);
}


int		Span::longestSpan()
{
	std::vector<int>::const_iterator	it = container.begin();
	std::vector<int>::const_iterator	ite = container.end();

	if (this->N == 0 || this->N == 1)
		throw SI();
	if (this->i == 0 || this->i == 1)
		throw NNS();
	std::sort(container.begin(), container.end());
	return (*(ite - 1) - *it);
}

void Span::addNumber(int num)
{
	if (this->i >= this->N)
		throw CF();
	container.push_back(num);
	this->i++;
}