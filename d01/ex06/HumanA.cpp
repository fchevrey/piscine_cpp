#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon & weapon) : _weapon(weapon)
{
	this->_name = name;
}
HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << _weapon.getType() << std::endl;
}
