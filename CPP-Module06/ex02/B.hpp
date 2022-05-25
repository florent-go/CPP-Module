#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
	public:
		B(void);
		B(B &a);
		virtual ~B(void);

		B &operator=(B &a);
};

#endif