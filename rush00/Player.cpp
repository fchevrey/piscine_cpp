/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:11:17 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:43:01 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Action		Player::_actions[NB_ACTION] = {
	Action(KEY_UP, &Player::moveUp),
	Action(KEY_DOWN, &Player::moveDown),
	Action(KEY_LEFT, &Player::moveLeft),
	Action(KEY_RIGHT, &Player::moveRight),
	};
/*  Struct Action to handle Keyboard event   */
Player::Action::Action(int nkey, fun_action fun)
{
	this->key = nkey;
	this->ptr = fun;
}

Player::Player(void)
{
	this->init();
}

Player::Player(std::string name) 
{
	this->init();
    this->_name = name;
}

void	Player::init(void)
{
    this->_pos = Pt(1);
    this->_sprite = PLAYER_SPRITE;
    this->_color = PLAYER_COLOR;
    this->_nbLife = 3;
    this->_type = PLAYER;
    this->_score = 0;
    this->_name = "Player 1";
}
Player::Player(const Player &src)
{
  this->operator=(src);
}


void		Player::Update(void)
{
}

int		Player::Collide(AGameEntity *other) //if destroy other return 1, if destroy this return -1 
{
	if (other->getType() == OBJECT)
	{
		this->setScore(20);
		other->takeDamage();
		return 0;
	}
	if (other->getType() != PLAYER)
	{
		this->takeDamage();
		other->takeDamage();
		return 1;
	}
	return 1;
}

Player::~Player(void)
{
}

Player & Player::operator=(const Player &rhs)
{
    this->_pos = rhs.getPos();
    this->_sprite = rhs.getSprite();
    this->_color = rhs.getColor();
	this->_nbLife = rhs.getNbLife();
	this->_type = rhs.getType();
    this->_score = rhs.getScore();
    this->_name = rhs.getName();

    return *this;
}

void            Player::moveLeft(void)
{
	if (this->_pos.x > 1)
		this->_pos.x -= 1;
}

void            Player::moveRight(void)
{
	if (this->_pos.x < (_size_world.x - 2))
		this->_pos.x++;
}

void            Player::moveUp(void)
{
	if (this->_pos.y > 1)
		this->_pos.y--;
}


void            Player::moveDown(void)
{
	if (this->_pos.y < (_size_world.y - 2))
		this->_pos.y++;
}

void 			Player::doAction(int c)
{
	for (int i = 0; i < NB_ACTION; i++)
	{
		if (_actions[i].key == c)
		{
			(this->*(_actions[i].ptr))();
		}
	}
}

std::string		Player::getName(void) const{
    return this->_name;
}

int			    Player::getScore(void) const{
    return this->_score;
}

void			Player::setScore(int point){

	this->_score += point;
}
