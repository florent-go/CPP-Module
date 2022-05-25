
#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "|====================================|" << std::endl;
	std::cout << "|str_address = " << &str << "        |" << std::endl;
	std::cout << "|ptr_address = " << ptr << "        |" << std::endl;
	std::cout << "|ref_address = " << &ref << "        |" << std::endl;
	std::cout << "|====================================|" << std::endl;
	std::cout << "|str = " << str << "              |" << std::endl;
	std::cout << "|ptr = " << *ptr << "              |" << std::endl;
	std::cout << "|ref = " << ref << "              |" << std::endl;
	std::cout << "|====================================|" << std::endl;
}