#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value)
{
	_fixed = value << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value)
{
	_fixed = (int)roundf(value * (1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
float		Fixed::toFloat(void) const
{
	return (((float)this->_fixed) / (1 << this->_bits));//toFloat
}

int			Fixed::toInt(void) const
{
	return ((this->_fixed >> _bits));
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}
void		Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
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
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed			Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed			Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed			Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed			Fixed::&operator++()
{
}

Fixed			Fixed::operator++(int value)
{
}

Fixed			Fixed::&operator--()
{
}

Fixed			Fixed::operator--(int value)
{
}

Fixed	Fixed::&min(const Fixed &a, const Fixed &b)
{
}

Fixed	Fixed::&max(const Fixed &a, const Fixed &b)
{
}
