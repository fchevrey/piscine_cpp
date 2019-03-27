#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	std::cout << "default contructor called" << std::endl;
	FragTrap("none");
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "name contructor called" << std::endl;
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 100;
	this->_max_energy_pts = 100;
	this->_level = 1;
	this->_melee_dmg = 30;
	this->_range_dmg = 20;
	this->_armor = 5;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "copy contructor called" << std::endl;
	FragTrap(src.GetName());
}

FragTrap::~FragTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs.GetName();
	return *this;
}

std::string		FragTrap::GetName(void) const
{
	return (this->_name);
}

void		FragTrap::rangetAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attack " << target
		<< " at range, causing "<< _range_dmg << "points of damages"<< std::endl;
}
void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attack " << target
		<< " in melee, causing "<< _melee_dmg << "points of damages"<< std::endl;
}
void		FragTrap::takeDammage(unsigned int amount)
{
	unsigned int	dmg = amount - _armor;

	if (dmg > this->_hit_pts)
		dmg = this->_hit_pts;
	this->_hit_pts -= dmg;
	std::cout << "FR4G-TP " << this->_name << " take "
		<<  dmg << " points of damages"<< std::endl;
}
void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_max_hit_pts)
		amount = (this->_max_hit_pts - this->_hit_pts);
	std::cout << "FR4G-TP " << this->_name << " repaired "
		<<  amount << " HP"<< std::endl;
}
