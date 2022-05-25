#include "mutantstack.hpp"

int main()
{
	std::cout << "==============INT=============" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "==============STRING=============" << std::endl;
	MutantStack<std::string> mstack2;
	mstack2.push("hello");
	mstack2.push("hi");

	std::cout << mstack2.top() << std::endl;

	mstack.pop();

	std::cout << mstack2.size() << std::endl;

	mstack2.push("salut");
	mstack2.push("hello");
	mstack2.push("737"); //[...] mstack.push(0);

	MutantStack<std::string>::iterator it2 = mstack2.begin();
	MutantStack<std::string>::iterator ite2 = mstack2.end();

	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::stack<std::string> s2(mstack2);
	return 0;
}