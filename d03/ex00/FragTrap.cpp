/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:51:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:38:38 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <stdlib.h>

bool	FragTrap::_rand = false;

FragTrap::FragTrap(void)
{
	std::cout << "default contructor called" << std::endl;
	this->_name = "random dude";
	this->init();
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->init();
	std::cout << "name contructor called" << std::endl;
}

void		FragTrap::init(void)
{
	int			i = 0;

	if (!_rand)
	{
		_rand = true;
		std::srand(time(0));
	}
	this->_attacks[i++] = &FragTrap::rangedAttack;
	this->_attacks[i++] = &FragTrap::meleeAttack;
	this->_attacks[i++] = &FragTrap::jumpAttack;
	this->_attacks[i++] = &FragTrap::knokAttack;
	this->_attacks[i++] = &FragTrap::fancyAttack;
	this->_attacks[i++] = &FragTrap::shotgunAttack;
	this->_attacks[i++] = &FragTrap::rocketAttack;
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
	this->init();
	this->_name = src.GetName();
	this->_hit_pts = src.GetHP();
	this->_max_hit_pts = src.GetMaxHP();
	this->_energy_pts = src.GetEnergy();
	this->_max_energy_pts = src.GetMaxEnergy();
	this->_melee_dmg = src.GetMeleeDmg();
	this->_range_dmg = src.GetRangeDmg();
	this->_level = src.GetLevel();
	this->_armor = src.GetArmor();
}

FragTrap::~FragTrap(void)
{
	std::cout << "destructor called" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
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
std::string		FragTrap::GetName(void) const
{
	return (this->_name);
}
unsigned int		FragTrap::GetHP(void) const
{
	return (this->_hit_pts);
}
unsigned int		FragTrap::GetMaxHP(void) const
{
	return (this->_max_hit_pts);
}
unsigned int		FragTrap::GetEnergy(void) const
{
	return (this->_energy_pts);
}
unsigned int		FragTrap::GetMaxEnergy(void) const
{
	return (this->_max_energy_pts);
}
unsigned int		FragTrap::GetRangeDmg(void) const
{
	return (this->_range_dmg);
}
unsigned int		FragTrap::GetMeleeDmg(void) const
{
	return (this->_melee_dmg);
}
unsigned int		FragTrap::GetLevel(void) const
{
	return (this->_level);
}
unsigned int		FragTrap::GetArmor(void) const
{
	return (this->_armor);
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

void		FragTrap::takeDammage(unsigned int amount)
{
	unsigned int	dmg = 0;

	if (amount > this->_armor)
		dmg = amount - _armor;
	if (dmg > this->_hit_pts)
		dmg = this->_hit_pts;
	this->_hit_pts -= dmg;
	std::cout << "FR4G-TP " << this->_name << " take "
		<<  dmg << " points of damages"<< std::endl;
	std::cout << "FR4G-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
void		FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_pts > this->_max_hit_pts)
		amount = (this->_max_hit_pts - this->_hit_pts);
	this->_hit_pts += amount;
	std::cout << "FR4G-TP " << this->_name << " repaired "
		<<  amount << " HP"<< std::endl;
	std::cout << "FR4G-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
