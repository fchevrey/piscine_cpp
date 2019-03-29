#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}


PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src)
{
}


PlasmaRifle::~PlasmaRifle()
{
}


void			PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


PlasmaRifle		&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	*(AWeapon*)this = rhs;
	return *this;
}


