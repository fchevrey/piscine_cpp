#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click clik *" << std::endl;
}


RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src)
{
	std::cout << "* click click clik *" << std::endl;
}


RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=(const RadScorpion &rhs)
{
	(Enemy)*this = (Enemy)rhs;
	return *this;
}
