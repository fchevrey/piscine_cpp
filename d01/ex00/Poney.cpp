/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:46:20 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 10:46:21 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Poney.hpp"
#include <iostream>

Poney::Poney(void)
{
	this->_size = 120;
	this->_shodded = false;
	this->_color = "brown";
	this->_name = "M. Poney";
	this->_female = false;
	std::cout << _name << " created" << std::endl;
}

Poney::Poney(int size, bool shodded, std::string color, std::string name,
		bool isfemale) : _size(size), _shodded(shodded), _color(color),
		 _name(name), _female(isfemale)
{
	std::cout << _name << " created" << std::endl;
}

Poney::~Poney(void)
{
	std::cout << _name << " destroyed" << std::endl;
}

void			Poney::Gambol(void)
{
	std::cout << this->_name << " Gambol in the grassland" << std::endl;
}

void			Poney::Jump(void)
{
	std::cout << this->_name << " Jump graciously" << std::endl;
}

std::string		Poney::GetColor(void)
{
	return (this->_color);
}

void			Poney::SetColor(std::string color)
{
	this->_color = color;
}

bool			Poney::IsShodded(void)
{
	return (this->_shodded);
}

void			Poney::SetShodded(bool value)
{
	this->_shodded = value;
}

std::string		Poney::GetName(void)
{
	return (this->_name);
}

void			Poney::SetName(std::string name)
{
	std::cout << this->_name << " renamed on " << name << std::endl;
	this->_name = name;
}

bool			Poney::GetIsFemale(void)
{
	return (_female);
}

bool			Poney::GetIsMale(void)
{
	return (!_female);
}
