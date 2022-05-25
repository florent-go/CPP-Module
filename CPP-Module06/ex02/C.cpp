#include "C.hpp"

C::C(void)
{
}

C::C(C &C)
{
	(void)C;
}

C::~C(void)
{
}

C &C::operator=(C &C)
{
	(void)C;
	return (*this);
}