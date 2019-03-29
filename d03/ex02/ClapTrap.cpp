/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:37:51 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:31:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <stdlib.h>

bool	ClapTrap::_rand = false;

ClapTrap::ClapTrap(void)
{
	std::cout << "Clap Trap default contructor called" << std::endl;
	this->_name = "random dude";
	this->init();
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->init();
	std::cout << " Clap Trap name contructor called" << std::endl;
}

void		ClapTrap::init(void)
{
	if (!_rand)
	{
		_rand = true;
		std::srand(time(0));
	}
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 100;
	this->_max_energy_pts = 100;
	this->_level = 1;
	this->_melee_dmg = 10;
	this->_range_dmg = 10;
	this->_armor = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Clap Trap copy contructor called" << std::endl;
	this->init();
	this->_name = src.GetName();
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clap Trap destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Clap Trap =" << std::endl;
	this->init();
	this->_name = rhs.GetName();
	this->_hit_pts = rhs.GetHP();
	this->_max_hit_pts = rhs.GetMaxHP();
	this->_energy_pts = rhs.GetEnergy();
	this->_max_energy_pts = rhs.GetMaxEnergy();
	this->_melee_dmg = rhs.GetMeleeDmg();
	this->_range_dmg = rhs.GetRangeDmg();
	this->_level = rhs.GetLevel();
	this->_armor = rhs.GetArmor();
	return *this;
}

std::string		ClapTrap::GetName(void) const
{
	return (this->_name);
}
unsigned int		ClapTrap::GetHP(void) const
{
	return (this->_hit_pts);
}
unsigned int		ClapTrap::GetMaxHP(void) const
{
	return (this->_max_hit_pts);
}
unsigned int		ClapTrap::GetEnergy(void) const
{
	return (this->_energy_pts);
}
unsigned int		ClapTrap::GetMaxEnergy(void) const
{
	return (this->_max_energy_pts);
}
unsigned int		ClapTrap::GetRangeDmg(void) const
{
	return (this->_range_dmg);
}
unsigned int		ClapTrap::GetMeleeDmg(void) const
{
	return (this->_melee_dmg);
}
unsigned int		ClapTrap::GetLevel(void) const
{
	return (this->_level);
}
unsigned int		ClapTrap::GetArmor(void) const
{
	return (this->_armor);
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Cl4P-TP " << this->_name << " attack " << target
		<< " at range, causing "<< _range_dmg << " points of damages"<< std::endl;
}
void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Cl4P-TP " << this->_name << " attack " << target
		<< " in melee, causing "<< _melee_dmg << " points of damages"<< std::endl;
}

void		ClapTrap::takeDammage(unsigned int amount)
{
	unsigned int	dmg = 0;

	if (amount > this->_armor)
		dmg = amount - _armor;
	if (dmg > this->_hit_pts)
		dmg = this->_hit_pts;
	this->_hit_pts -= dmg;
	std::cout << "Cl4P-TP " << this->_name << " take "
		<<  dmg << " points of damages"<< std::endl;
	std::cout << "Cl4P-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
void		ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_pts > this->_max_hit_pts)
		amount = (this->_max_hit_pts - this->_hit_pts);
	this->_hit_pts += amount;
	std::cout << "Cl4P-TP " << this->_name << " repaired "
		<<  amount << " HP"<< std::endl;
	std::cout << "Cl4P-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
