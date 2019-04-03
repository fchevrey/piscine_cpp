/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:10:52 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:16:20 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AGameEntity.hpp"

const Pt		AGameEntity::_size_world(GAME_WIDTH, GAME_HEIGHT);

AGameEntity::AGameEntity(const AGameEntity &src)
{
     *this = src;
    return ;
}

AGameEntity & AGameEntity::operator=(const AGameEntity &rhs)
{
    this->_pos = rhs.getPos();
    this->_color = rhs.getColor();
    this->_nbLife = rhs.getNbLife();
    this->_type = rhs.getType();
    this->_sprite = rhs.getSprite();
    return *this;
}

Pt      AGameEntity::getPos(void) const
{
    return this->_pos;
}
void	AGameEntity::takeDamage(void)
{
	this->_nbLife -=1;
}

int     AGameEntity::getColor(void) const
{
    return this->_color;
}

int     AGameEntity::getNbLife(void) const
{
    return this->_nbLife;
}

int     AGameEntity::getType(void)const
{
    return this->_type;
}

int				AGameEntity::getSprite(void) const
{
	return this->_sprite;
}

void    AGameEntity::setPos(int x, int y){
    this->_pos = Pt(x,y);
}
