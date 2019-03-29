/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 09:33:16 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 11:15:08 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_bits = 8;
//int Fixed::array[] = {12, 15, 46, 18};

void		Fixed::_FillOpArray(void)
{
	this->_op_array[0] = &Fixed::operator+;
	this->_op_array[1] = &Fixed::operator-;
	this->_op_array[2] = &Fixed::operator*;
	this->_op_array[3] = &Fixed::operator/;
	this->_op[0] = '+';
	this->_op[1] = '-';
	this->_op[2] = '*';
	this->_op[3] = '/';
}

Fixed::Fixed(void)
{
	_FillOpArray();
	//Fixed (Fixed::*f[])(Fixed const &) = {};
	_fixed = 0;
}

Fixed::Fixed(int value)
{
	_FillOpArray();
	_fixed = value << _bits;
}

Fixed::Fixed(float value)
{
	_FillOpArray();
	_fixed = (int)roundf(value * (1 << _bits));
}

Fixed::Fixed(Fixed const & src)
{
	_FillOpArray();
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

bool			Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixed < rhs.getRawBits());
}

bool			Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixed > rhs.getRawBits());
}

bool			Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixed >= rhs.getRawBits());
}

bool			Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixed <= rhs.getRawBits());
}

bool			Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixed == rhs.getRawBits());
}

bool			Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixed != rhs.getRawBits());
}

Fixed			Fixed::operator+(Fixed const & rhs) const
{
	Fixed		dst;

	dst.setRawBits(this->_fixed + rhs.getRawBits());
	return (dst);
}

Fixed			Fixed::operator-(Fixed const & rhs) const
{
	Fixed		dst;

	dst.setRawBits(this->_fixed - rhs.getRawBits());
	return (dst);
}

Fixed			Fixed::operator*(Fixed const & rhs) const
{
	Fixed		dst;

	dst.setRawBits((this->_fixed * rhs.getRawBits()) >> _bits);
	return (dst);
}

Fixed			Fixed::operator/(Fixed const & rhs) const
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

Fixed		Fixed::calc(char op, Fixed const &rhs) const
{
	int		i = 0;
	Fixed	dst(*this);

	while ( i < 4 && _op[i] != op)
		i++;
	if (i > 4)
		return dst;
	return ((this->*_op_array[i])(rhs));
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

Fixed	const Fixed::calc(const Fixed &a, char op, const Fixed &b)
{
	Fixed		dst(a);

	return (a.calc(op, b));
}
