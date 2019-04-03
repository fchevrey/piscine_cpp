/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:50:27 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 20:39:14 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Boss.hpp"

Boss::fun_boss_move			Boss::_moves[BOSS_MOVE] = {
		&Boss::moveUp,
		&Boss::moveLeft,
		&Boss::moveDown,
		&Boss::moveLeft,
		&Boss::moveLeft,
		&Boss::moveDown,
		&Boss::moveLeft,
		&Boss::moveUp,
		&Boss::moveLeft
};


Boss::Boss(void) : Enemy()
{
	this->_nbLife = 3;
	this->_pattern = 0;
	this->_sprite = BOSS_SPRITE;
	this->_color = BOSS_COLOR;
}


Boss::Boss(const Boss &src) : Enemy(src)
{
	this->_nbLife = src.getNbLife();
	this->_pattern = src._pattern;
}

Boss::~Boss()
{
}

bool Boss::TryShoot(void)
{
	if (rand() % 10 == 2)
		return true;
	return false;
}

Boss & Boss::operator=(const Boss &rhs)
{
	*((Enemy*)this) = (Enemy)rhs;
	this->_nbLife = rhs._nbLife;
	this->_pattern = rhs._pattern;
	return *this;
}

void		Boss::Update(void)
{
	if (this->_pattern >= BOSS_MOVE)
		this->_pattern = 0;
	(this->*(Boss::_moves[this->_pattern]))();
	this->_pattern++;
}
void		Boss::moveLeft(void)
{
	this->_pos.x--;
}
void		Boss::moveUp(void)
{
	if (this->_pos.y > 1)
		this->_pos.y--;
}
void		Boss::moveDown(void)
{
	if (this->_pos.y < (_size_world.y - 2))
		this->_pos.y++;
}
