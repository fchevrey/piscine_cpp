/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:51:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:35:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <stdlib.h>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "default SCAV contructor called" << std::endl;
	this->_name = "random scav";
	this->init();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->init();
	std::cout << "SCAV name contructor called" << std::endl;
}
void			ScavTrap::arrayInit(void)
{
	int			i = 0;

	this->_challenges[i++] = &ScavTrap::diceChallenge;
	this->_challenges[i++] = &ScavTrap::cardChallenge;
	this->_challenges[i++] = &ScavTrap::yoMamaFightChallenge;
	this->_challenges[i++] = &ScavTrap::thumbFightChallenge;
	this->_challenges[i++] = &ScavTrap::paperScissorStoneChallenge;
}

void		ScavTrap::init(void)
{
	arrayInit();
	this->_energy_pts = 50;
	this->_max_energy_pts = 50;
	this->_melee_dmg = 20;
	this->_range_dmg = 15;
	this->_armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap((ClapTrap)src)
{
	std::cout << "scavtrap copy contructor called" << std::endl;
	this->init();
	this->_name = src.GetName();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "scavtrap destructor called" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Scav Trap =" << std::endl;
	this->arrayInit();
	this->_name = rhs.GetName();
	this->_hit_pts = rhs.GetHP();
	this->_energy_pts = rhs.GetEnergy();
	this->_level = rhs.GetLevel();
	this->_armor = rhs.GetArmor();
	return *this;
}
void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Sc4v-TP " << this->_name << " attack " << target
		<< " at range, causing "<< _range_dmg << " points of damages"<< std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Sc4V-TP " << this->_name << " attack " << target
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
