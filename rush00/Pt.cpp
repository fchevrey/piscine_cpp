/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pt.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:18:48 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/30 21:45:38 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pt.hpp"

Pt::Pt(void)
{
	this->x = 0;
	this->y = 0;
}

Pt::Pt(int both)
{
	this->x = both;
	this->y = both;
}

Pt::Pt(int x, int y)
{
	this->x = x;
	this->y = y;
}

Pt::Pt(const Pt &src)
{
	this->x = src.x;
	this->y = src.y;
}

Pt		& Pt::operator=(const Pt &rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	return *this;
}
Pt::~Pt()
{}

Pt		Pt::operator+(const Pt &rhs)
{
	return (Pt((this->x + rhs.x), (this->y + rhs.y)));
}

Pt		Pt::operator-(const Pt &rhs)
{
	return (Pt((this->x - rhs.x), (this->y - rhs.y)));
}

Pt		Pt::operator*(const Pt &rhs)
{
	return (Pt((this->x * rhs.x), (this->y * rhs.y)));
}

Pt		Pt::operator/(const Pt &rhs)
{
	return (Pt((this->x / rhs.x), (this->y / rhs.y)));
}

bool		Pt::operator==(const Pt &rhs)
{
	if (this->x == rhs.x && this->y == rhs.y)
		return true;
	return false;
}

Pt		& Pt::operator++()//++Pt
{
	this->x++;
	this->y++;
	return (*this);
}

Pt		Pt::operator++(int)//Pt++
{
	Pt		dst(*this);

	this->x++;
	this->y++;
	return (dst);
}

Pt		& Pt::operator--()//--Pt
{
	this->x--;
	this->y--;
	return (*this);
}

Pt		Pt::operator--(int)//Pt--
{
	Pt		dst(*this);

	this->x--;
	this->y--;
	return (dst);
}
