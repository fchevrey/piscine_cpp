/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:48:09 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:57:50 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) //private
{
	this->_name = "private";
	this->_title = "private";
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !"<< std::endl;
}
Sorcerer::Sorcerer(Sorcerer const & src) : _name(src.GetName()), _title(src.GetTitle())
{
	std::cout << this->_name << ", " << this->_title << ", is born !"<< std::endl;
}
Sorcerer &	Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs.GetName();
	this->_name = rhs.GetTitle();
	return *this;
}

void		Sorcerer::Introduce(void) const
{
	std::cout << *this;
}
std::string		Sorcerer::GetName(void) const
{
	return (this->_name);
}

void			Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
std::string		Sorcerer::GetTitle(void) const
{
	return (this->_title);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !"<< std::endl;
}

std::ostream	&operator << (std::ostream &os, const Sorcerer &rhs)
{
	os << "I am "<< rhs.GetName() << ", " << rhs.GetTitle() << ", and I like ponies !"<< std::endl;
	return os;
}
