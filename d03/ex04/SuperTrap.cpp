/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 20:39:12 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:31:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap()
{
	std::cout << " SuperTrap default contructor called" << std::endl;
	this->_name = "random dude";
	this->init();
}

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	this->init();
	this->_name = name;
	std::cout << "SuperTrap name contructor called" << std::endl;
}

void		SuperTrap::init(void)
{
	unsigned int	energy;
	unsigned int	max_energy;
	unsigned int	melee;

	NinjaTrap::init();
	energy = this->_energy_pts;
	max_energy = this->_max_energy_pts;
	melee = this->_melee_dmg;
	FragTrap::init();
	this->_energy_pts = energy;
	this->_max_energy_pts = max_energy;
	this->_melee_dmg = melee;
}

SuperTrap::SuperTrap(SuperTrap const & src) : NinjaTrap((NinjaTrap)src), FragTrap((FragTrap)src)
{
	this->_name = src.GetName();
	this->_energy_pts = src.GetEnergy();
	this->_max_energy_pts = src.GetMaxEnergy();
	this->_melee_dmg = src.GetMeleeDmg();
	this->_range_dmg = src.GetRangeDmg();
	this->_armor = src.GetArmor();
	std::cout << "Super Trap copy contructor called" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Frag Trap destructor called" << std::endl;
}

SuperTrap &	SuperTrap::operator=(SuperTrap const & rhs)
{
	*(ClapTrap*)this = (ClapTrap)rhs;
	std::cout << "Frag Trap =" << std::endl;
	this->arrayInit();
	this->_name = rhs.GetName();
	this->_hit_pts = rhs.GetHP();
	this->_energy_pts = rhs.GetEnergy();
	this->_level = rhs.GetLevel();
	this->_armor = rhs.GetArmor();
	return *this;
}

void		SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}
void		SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
