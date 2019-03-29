/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:51:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:12:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <stdlib.h>

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	std::cout << " NinjaTrap default contructor called" << std::endl;
	this->_name = "random dude";
	this->init();
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->init();
	std::cout << "NinjaTrap name contructor called" << std::endl;
}

void		NinjaTrap::init(void)
{
	this->_hit_pts = 60;
	this->_max_hit_pts = 60;
	this->_energy_pts = 120;
	this->_energy_pts = 120;
	this->_melee_dmg = 60;
	this->_range_dmg = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap((ClapTrap)src)
{
	this->_name = src.GetName();
	this->_energy_pts = src.GetEnergy();
	this->_max_energy_pts = src.GetMaxEnergy();
	this->_melee_dmg = src.GetMeleeDmg();
	this->_range_dmg = src.GetRangeDmg();
	this->_armor = src.GetArmor();
	std::cout << "NinjaTrap copy contructor called" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & rhs)
{
	*(ClapTrap*)this = (ClapTrap)rhs;
	std::cout << "NinjaTrap =" << std::endl;
	this->_name = rhs.GetName();
	this->_hit_pts = rhs.GetHP();
	this->_energy_pts = rhs.GetEnergy();
	this->_level = rhs.GetLevel();
	this->_armor = rhs.GetArmor();
	return *this;
}
void	NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
	std::cout << this->_name << " do ninjutsu stuff to the ClapTrap " << target.GetName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << this->_name << " Intimidate the SacvTrap " << target.GetName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << this->_name << " dodge the ClapTrap " << target.GetName() << std::endl;
}
void	NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << this->_name << " start an infinite ninja battle with " << target.GetName() << std::endl;
}
void		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja " << this->_name << " attack " << target
		<< " at range, causing "<< _range_dmg << " points of damages"<< std::endl;
}
void		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja " << this->_name << " attack " << target
		<< " in melee, causing "<< _melee_dmg << " points of damages"<< std::endl;
}
