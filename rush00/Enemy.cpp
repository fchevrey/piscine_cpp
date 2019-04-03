/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:11:06 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:44:14 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Enemy.hpp"

Enemy::Enemy(void)
{
    int y = (rand() % (GAME_HEIGHT - 2));
    int x = GAME_WIDTH - 2;
    this->_pos = Pt(x , y + 1);
	this->init();
}

void		Enemy::init()
{
    this->_sprite = ENEMY_SPRITE;
    this->_color = ENEMY_COLOR;
    this->_type = ENEMY;
	this->_nbLife = 1;
	this->_half = false;
}

Enemy::Enemy(Pt  position)
{
    this->_pos = position;
	this->init();
}

void		Enemy::Update(void)
{
	if (_half)
		this->_pos.x--;
	_half = !_half;
}

int		Enemy::Collide(AGameEntity *other)
{
	int		type;

	if (!other)
		return 0;
	type = other->getType();
	if (type == WEAPON || type == ENEMY)
	{
		this->takeDamage();
		other->takeDamage();
		return -1;
	}
	else return 1;
}

Enemy::Enemy(const Enemy &src)
{
      this->operator=(src);
}

Enemy::~Enemy(void)
{
      return ;
}

Enemy & Enemy::operator=(const Enemy &rhs)
{
    this->_pos = rhs.getPos();
    this->_sprite = rhs.getSprite();
    this->_color = rhs.getColor();
    this->_type = rhs.getType();
	this->_half = rhs._half;
	this->_nbLife = rhs.getNbLife();
    return *this;
}

bool			Enemy::TryShoot(void)
{
	if (rand() % 20 == 2)
		return true;
	return false;
}
