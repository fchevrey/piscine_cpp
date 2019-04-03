/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:11:39 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 20:55:05 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->init();
}

Weapon::Weapon(Pt   pos)
{
	this->init();
    this->_pos = pos;
	this->_color = ENEMY_COLOR;
}
Weapon::Weapon(Pt   pos, bool shoot_by_player)
{
	this->init();
    this->_pos = pos;
	this->_shoot_by_player = shoot_by_player;
	this->_color = shoot_by_player ? PLAYER_COLOR : ENEMY_COLOR;

}
Weapon::Weapon(const Weapon &src)
{
    this->_color = src._color;
	this->_sprite = src._sprite;
	this->_pos = src._pos;
	this->_type = src._type;
	this->_shoot_by_player = src._shoot_by_player;
	this->_nbLife = src._nbLife;
}
void		Weapon::init(void)
{
    this->_color = 0xef1df6;
    this->_sprite = WEAPON_SPRITE;
    this->_pos = Pt(0,0);
	this->_type = WEAPON;
	this->_shoot_by_player = false;
	this->_nbLife = 1;
}
Weapon::~Weapon(void)
{
}

Weapon & Weapon::operator=(const Weapon &rhs)
{
    this->_color = rhs._color;
	this->_sprite = rhs._sprite;
	this->_pos = rhs._pos;
	this->_type = rhs._type;
	this->_shoot_by_player = rhs._shoot_by_player;
	this->_nbLife = rhs._nbLife;
    return *this;
}

int		Weapon::Collide(AGameEntity *other)
{
	int		type;

    if (!other)
        return (0);
	type = other->getType();
	if (type == PLAYER || type == ENEMY || type == WEAPON)
	{
		other->takeDamage();
		this->takeDamage();
		return -1;
	}
    return 0;
}

void	Weapon::Update(void)
{
	if (this->_shoot_by_player)
		this->_pos.x++;
	else
		this->_pos.x--;
}

void	Weapon::takeDamage(void)
{
	this->_nbLife -= 1;
}
