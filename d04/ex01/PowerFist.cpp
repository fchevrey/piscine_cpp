#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}


PowerFist::PowerFist(const PowerFist &src) : AWeapon(src)
{
}


PowerFist::~PowerFist()
{
}


void			PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM *" << std::endl;
}


PowerFist		&PowerFist::operator=(const PowerFist &rhs)
{
	*(AWeapon*)this = rhs;
	return *this;
}
