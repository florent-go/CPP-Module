#include "A.hpp"

A::A(void)
{
}

A::A(A &a)
{
	(void)a;
}

A::~A(void)
{
}

A &A::operator=(A &a)
{
	(void)a;
	return (*this);
}