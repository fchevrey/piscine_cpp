/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:51:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:26:24 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << " FragTrap default contructor called" << std::endl;
	this->_name = "random dude";
	this->init();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->init();
	std::cout << "FragTRap name contructor called" << std::endl;
}

void		FragTrap::arrayInit(void)
{
	int			i = 0;

	this->_attacks[i++] = &FragTrap::rangedAttack;
	this->_attacks[i++] = &FragTrap::meleeAttack;
	this->_attacks[i++] = &FragTrap::jumpAttack;
	this->_attacks[i++] = &FragTrap::knokAttack;
	this->_attacks[i++] = &FragTrap::fancyAttack;
	this->_attacks[i++] = &FragTrap::shotgunAttack;
	this->_attacks[i++] = &FragTrap::rocketAttack;
}

void		FragTrap::init(void)
{
	arrayInit();
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 100;
	this->_level = 1;
	this->_max_energy_pts = 100;
	this->_melee_dmg = 30;
	this->_range_dmg = 20;
	this->_armor = 5;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap((ClapTrap)src)
{
	arrayInit();
	this->_name = src.GetName();
	this->_energy_pts = src.GetEnergy();
	this->_max_energy_pts = src.GetMaxEnergy();
	this->_melee_dmg = src.GetMeleeDmg();
	this->_range_dmg = src.GetRangeDmg();
	this->_armor = src.GetArmor();
	std::cout << "Frag Trap copy contructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag Trap destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
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
void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attack " << target
		<< " at range, causing "<< _range_dmg << " points of damages"<< std::endl;
}
void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attack " << target
		<< " in melee, causing "<< _melee_dmg << " points of damages"<< std::endl;
}

void			FragTrap::jumpAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " make a JumpAttack at " << target
		<< ", causing "<< _melee_dmg << " points of damages"<< std::endl;
}
void			FragTrap::knokAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " knock " << target
		<< ", causing "<< _melee_dmg << " points of damages"<< std::endl;
}
void			FragTrap::fancyAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " make a fancy attack toward " << target
		<< ", causing "<< _melee_dmg << " points of damages"<< std::endl;
}
void		FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " shoot " << target
		<< " with his shotgun, causing "<< _range_dmg << " points of damages."
		<< std::endl;
}
void		FragTrap::rocketAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " scream \"TAKE THAT\" and throw a rocket toward " << target
		<< " who take "<< _range_dmg << " points of damages. " << this->_name
		<< " is amazed by the blow " << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int		rd;

	if (this->_energy_pts < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " is too exhausted "
		<< std::endl;
		return ;
	}
	this->_energy_pts -= 25;
	rd = std::rand() % NB_ATTACK;
	(this->*(_attacks[rd]))(target);
}
