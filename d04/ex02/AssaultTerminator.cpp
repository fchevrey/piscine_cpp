#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(const AssaultTerminator &)
{
	std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ..." << std::endl;
}


ISpaceMarine * AssaultTerminator::clone() const
{
	return new AssaultTerminator();
}


void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean PURIFY IT !" << std::endl;
}


void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}


void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfist *" << std::endl;
}


AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &)
{
	return *this;
}


