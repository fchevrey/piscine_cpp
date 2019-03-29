/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 13:44:10 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 14:41:50 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(void) : _APcost(0), _dmg(0)
{
	std::cout << "A WEAPOn CALLED" << std::endl;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _APcost(apcost), _dmg(damage)
{
}

AWeapon::AWeapon(const AWeapon &src)
{
	this->_name = src.getName();
	this->_name = src.getName();
	this->_name = src.getName();
}


AWeapon::~AWeapon()
{
}


std::string AWeapon::getName() const
{
	return this->_name;
}


int			AWeapon::getAPCost() const
{
	return _APcost;
}


int			AWeapon::getDamage() const
{
	return _dmg;
}

AWeapon & AWeapon::operator=(const AWeapon &rhs)
{
	this->_name = rhs.getName();
	this->_APcost = rhs.getAPCost();
	this->_dmg = rhs.getDamage();
	return *this;
}
