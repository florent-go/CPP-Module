#include "Karen.hpp" 

int main(void)
{
	Karen instance;
	std::cout << "========================================" << std::endl;
	instance.complain("DEBUG");
	std::cout << "========================================" << std::endl;
	instance.complain("INFO");
	std::cout << "========================================" << std::endl;
	instance.complain("WARNING");
	std::cout << "========================================" << std::endl;
	instance.complain("ERROR");
	std::cout << "========================================" << std::endl;
}