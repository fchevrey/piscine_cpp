/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:36:24 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 12:06:54 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon(void)
{
}

void					Weapon::setType(std::string type)
{
	this->type = type;
}
const std::string &		Weapon::getType()
{
	return (this->type);
}
