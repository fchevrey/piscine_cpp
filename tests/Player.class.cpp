/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 16:31:47 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 17:34:41 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Player.class.hpp"

	Player::Player(char *na, char *ra, char *cla, int l)  : _name(na),
		_race(ra), _clas(cla), _lvl(l)
{
	std::cout << "contructor Player called" << std::endl;
}

Player::~Player(void)
{
	std::cout << "destructor Player called" << std::endl;
}

char	*Player::getname (void) const
{
	return (this->_name);
}

char	*Player::getrace (void) const
{
	return (this->_race);
}

char	*Player::getclas (void) const
{
	return (this->_clas);
}

int		Player::getlvl (void) const
{
	return (this->_lvl);
}

void	Player::lvlup ( void )
{
	this->_lvl += 1;
}

void	Player::setlvl (int lvl)
{
	if (lvl > 0)
		this->_lvl = lvl;
}

void	Player::setname (char *name)
{
	if (name)
		this->_name = name;
}

void	Player::setrace (char *race)
{
	if (race)
		this->_race = race;
}

void	Player::setclas (char *clas)
{
	if (clas)
		this->_clas = clas;
}
