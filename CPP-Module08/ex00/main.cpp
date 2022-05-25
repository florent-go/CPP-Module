#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::cout << "==============LIST=====================" << std::endl;
	std::list<int>			list;

	list.push_back(13);
	list.push_back(26);
	list.push_back(1);

	try
	{
		easyfind(list, 26);
		std::cout << "=======================" << std::endl;
		easyfind(list, 1);
		std::cout << "=======================" << std::endl;
		easyfind(list, 13);
		std::cout << "=======================" << std::endl;
		easyfind(list, 999);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "==============VECTOR=====================" << std::endl;
	std::vector<int>		vector;

	vector.push_back(-13);
	vector.push_back(27);
	vector.push_back(999);

	try
	{
		easyfind(vector, 27);
		std::cout << "=======================" << std::endl;
		easyfind(vector, 999);
		std::cout << "=======================" << std::endl;
		easyfind(vector, -13);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}