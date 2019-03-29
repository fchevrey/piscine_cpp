/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:05:22 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 11:20:19 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & src)
{
	this->_name = src.GetName();
}

Peon &	Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.GetName();
	return *this;
}
void		Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turn into a pink poney !"<< std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

