#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <cstdio>

class replace
{
private:
	
public:
	replace();
	~replace();

	static void replaceline(std::string filename, std::string s1, std::string s2);
};


#endif