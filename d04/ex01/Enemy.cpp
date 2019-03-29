/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:18:20 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:47:26 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type)
{
	this->_hitpts = hp;
	this->_type = type;
}

Enemy::Enemy(const Enemy &src)
{
	this->_hitpts = src.getHP();
	this->_type = src.getType();
}

Enemy::~Enemy()
{
}

std::string Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hitpts;
}

void Enemy::takeDammage(int amount)
{
	if (amount < 0)
		return ;
	this->_hitpts -= amount;
	//if (this->_hitpts <= 0)
	//	this->_hitpts = 0;
}

Enemy & Enemy::operator=(const Enemy &rhs)
{
	this->_type = rhs.getType();
	this->_hitpts = rhs.getHP();
	return *this;
}

Enemy::Enemy(void)
{
}
