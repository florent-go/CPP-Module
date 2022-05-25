#include "B.hpp"

B::B(void)
{
}

B::B(B &B)
{
	(void)B;
}

B::~B(void)
{
}

B &B::operator=(B &B)
{
	(void)B;
	return (*this);
}