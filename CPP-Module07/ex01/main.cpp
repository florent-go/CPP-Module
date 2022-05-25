#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T value)
{
	std::cout << value << std::endl;
}

int main(void)
{
	int		tab[]= {0 , 1 , 52 , 38 , 41 , 55 , 6};
	float	tab2[] = {0.1 , 15.4, 19.6 , 13.78};
	std::string tab3[] = {"salut", "test", "bonsoir", "here"};

	std::cout << "============Print Tab Int=====" << std::endl;
	iter(tab, 7, print);
	std::cout << "============Print Tab Float=====" << std::endl;
	iter(tab2, 4, print);
	std::cout << "============Print Tab Float=====" << std::endl;
	iter(tab3, 4, print);
}