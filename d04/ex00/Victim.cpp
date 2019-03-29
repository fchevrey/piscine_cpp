/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:30:38 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 11:19:15 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)//private
{
	this->_name = "private";
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !"<< std::endl;
}

Victim::Victim(const Victim & src)
{
	this->_name = src.GetName();
}

Victim &	Victim::operator=(Victim const & rhs)
{
	this->_name = rhs.GetName();
	return *this;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just popped !"<< std::endl;
}

std::string			Victim::GetName(void) const
{
	return this->_name;
}

void				Victim::Introduce(void) const
{
	std::cout << *this << std::endl;
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turn into a cute little sheep !"<< std::endl;
}

std::ostream	&operator << (std::ostream &os, const Victim &rhs)
{
	os << "I'm " << rhs.GetName() << " and I like otters !"<< std::endl;
	return os;
}
