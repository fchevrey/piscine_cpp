/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:51:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:34:19 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <stdlib.h>

bool	ScavTrap::_rand = false;

ScavTrap::ScavTrap(void)
{
	std::cout << "default SCAV contructor called" << std::endl;
	this->_name = "random scav";
	this->init();
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	this->init();
	std::cout << "SCAV name contructor called" << std::endl;
}

void		ScavTrap::init(void)
{
	int			i = 0;

	if (!_rand)
	{
		_rand = true;
		std::srand(time(0));
	}
	this->_challenges[i++] = &ScavTrap::diceChallenge;
	this->_challenges[i++] = &ScavTrap::cardChallenge;
	this->_challenges[i++] = &ScavTrap::yoMamaFightChallenge;
	this->_challenges[i++] = &ScavTrap::thumbFightChallenge;
	this->_challenges[i++] = &ScavTrap::paperScissorStoneChallenge;
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 50;
	this->_max_energy_pts = 50;
	this->_level = 1;
	this->_melee_dmg = 20;
	this->_range_dmg = 15;
	this->_armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "scavtrap copy contructor called" << std::endl;
	this->init();
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "scavtrap destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
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

std::string		ScavTrap::GetName(void) const
{
	return (this->_name);
}
unsigned int		ScavTrap::GetHP(void) const
{
	return (this->_hit_pts);
}
unsigned int		ScavTrap::GetMaxHP(void) const
{
	return (this->_max_hit_pts);
}
unsigned int		ScavTrap::GetEnergy(void) const
{
	return (this->_energy_pts);
}
unsigned int		ScavTrap::GetMaxEnergy(void) const
{
	return (this->_max_energy_pts);
}
unsigned int		ScavTrap::GetRangeDmg(void) const
{
	return (this->_range_dmg);
}
unsigned int		ScavTrap::GetMeleeDmg(void) const
{
	return (this->_melee_dmg);
}
unsigned int		ScavTrap::GetLevel(void) const
{
	return (this->_level);
}
unsigned int		ScavTrap::GetArmor(void) const
{
	return (this->_armor);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " weakly attack " << target
		<< " at range, causing "<< _range_dmg << " points of damages"<< std::endl;
}
void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " weakly attack " << target
		<< " in melee, causing "<< _melee_dmg << " points of damages"<< std::endl;
}
void			ScavTrap::diceChallenge(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " challenge" << target
		<< " at dice" << std::endl;
}
void			ScavTrap::yoMamaFightChallenge(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " challenge" << target
		<< " at an epic YO MAMA FIGHT" << std::endl;
}
void			ScavTrap::cardChallenge(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " challenge" << target
		<< " at a card game" << std::endl;
}
void		ScavTrap::thumbFightChallenge(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " challenge" << target
		<< " at a manly thumb fight" << std::endl;
}
void		ScavTrap::paperScissorStoneChallenge(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " challenge" << target
		<< " at Paper Scissor Stone" << std::endl;
}

void			ScavTrap::challengeNewcomer(std::string const & target)
{
	int		rd;

	if (this->_energy_pts < 25)
	{
		std::cout << "SCAV-TP " << this->_name << " is too exhausted "
		<< std::endl;
		return ;
	}
	this->_energy_pts -= 25;
	rd = std::rand() % NB_CHALLENGES;
	(this->*(_challenges[rd]))(target);
}

void		ScavTrap::takeDammage(unsigned int amount)
{
	unsigned int	dmg = 0;

	if (amount > this->_armor)
		dmg = amount - _armor;
	if (dmg > this->_hit_pts)
		dmg = this->_hit_pts;
	this->_hit_pts -= dmg;
	std::cout << "SC4V-TP " << this->_name << " take "
		<<  dmg << " points of damages"<< std::endl;
	std::cout << "SC4V-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
void		ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hit_pts > this->_max_hit_pts)
		amount = (this->_max_hit_pts - this->_hit_pts);
	this->_hit_pts += amount;
	std::cout << "SC4V-TP " << this->_name << " repaired "
		<<  amount << " HP"<< std::endl;
	std::cout << "SC4V-TP " << this->_name << " have now "
		<<  this->_hit_pts << " HP"<< std::endl;
}
