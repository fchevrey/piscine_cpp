/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:46:38 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:53:53 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_ap = 40;
	this->_weapon = NULL;
}


Character::Character(const Character &src)
{
	this->_name = src.getName();
	this->_ap = src.getAP();
	this->_weapon = NULL;
}


Character::~Character()
{
}


void			Character::recoverAP()
{
	if (this->_ap == 40)
		return ;
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void			Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

AWeapon			*Character::getWeapon(void) const
{
	return this->_weapon;
}

void			Character::attack(Enemy *enemy)
{
	if (this->_weapon == NULL || enemy == NULL)
		return ;
	if (this->_ap < _weapon->getAPCost())
		return ;
	this->_ap -= _weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a "
		<< _weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDammage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string		Character::getName(void) const
{
	return this->_name;
}

int				Character::getAP(void) const
{
	return this->_ap;
}

Character		& Character::operator=(const Character &rhs)
{
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return *this;
}

Character::Character(void)//private
{
}

std::ostream	&operator << (std::ostream &os, const Character &rhs)
{
	AWeapon		*wp = rhs.getWeapon();
	if (wp != NULL)
		os << rhs.getName() << " has " << rhs.getAP() << " AP and weald a "
			<< wp->getName();
	else
		os << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed";

	return os;
}
