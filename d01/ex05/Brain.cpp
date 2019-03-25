#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

std::string		Brain::identify(void)
{
	void				*address;
	std::stringstream	ss;
	
	address = (void*)this;
	ss << address;
	std::string str = ss.str();
	return (str);
}
