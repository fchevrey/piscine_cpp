/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 09:33:16 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 11:11:55 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
	_fixed = 0;
}

Fixed::Fixed(int value)
{
	_fixed = value << _bits;
}

Fixed::Fixed(float value)
{
	_fixed = (int)roundf(value * (1 << _bits));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}
float		Fixed::toFloat(void) const
{
	return (((float)this->_fixed) / (1 << this->_bits));
}

int			Fixed::toInt(void) const
{
	return ((this->_fixed >> _bits));
}

int			Fixed::getRawBits(void) const
{
	return (_fixed);
}
void		Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	this->_fixed = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream &os, Fixed const & rhs)
{
	os << rhs.toFloat();
	return (os);
}

bool			Fixed::operator<(Fixed const & rhs)
{
	return (this->_fixed < rhs.getRawBits());
}

bool			Fixed::operator>(Fixed const & rhs)
{
	return (this->_fixed > rhs.getRawBits());
}

bool			Fixed::operator>=(Fixed const & rhs)
{
	return (this->_fixed >= rhs.getRawBits());
}

bool			Fixed::operator<=(Fixed const & rhs)
{
	return (this->_fixed <= rhs.getRawBits());
}

bool			Fixed::operator==(Fixed const & rhs)
{
	return (this->_fixed == rhs.getRawBits());
}

bool			Fixed::operator!=(Fixed const & rhs)
{
	return (this->_fixed != rhs.getRawBits());
}


Fixed			Fixed::operator+(Fixed const & rhs)
{
	Fixed		dst;

	dst.setRawBits(this->_fixed + rhs.getRawBits());
	return (dst);
}

Fixed			Fixed::operator-(Fixed const & rhs)
{
	Fixed		dst;

	dst.setRawBits(this->_fixed - rhs.getRawBits());
	return (dst);
}

Fixed			Fixed::operator*(Fixed const & rhs)
{
	Fixed		dst;

	dst.setRawBits((this->_fixed * rhs.getRawBits()) >> _bits);
	return (dst);
}

Fixed			Fixed::operator/(Fixed const & rhs)
{
	Fixed		dst;

	dst.setRawBits((this->_fixed << _bits) / rhs.getRawBits());
	return (dst);
}

Fixed			&Fixed::operator++()//++a
{
	this->_fixed++;
	return (*this);
}

Fixed			Fixed::operator++(int value)//a++
{
	Fixed	dst(*this);

	if (value == 0)
		this->_fixed++;
	else
		this->_fixed++;
	return (dst);
}

Fixed			&Fixed::operator--()//--a
{
	this->_fixed -= 1;
	return (*this);
}

Fixed			Fixed::operator--(int value)//a--
{
	Fixed	dst(*this);

	if (value == 0)
		this->_fixed--;
	else
		this->_fixed--;
	return (dst);
}

Fixed	const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
