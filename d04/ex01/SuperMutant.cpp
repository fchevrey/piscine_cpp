/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:31:18 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:47:40 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}


SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}


SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh !" << std::endl;
}

void			SuperMutant::takeDammage(int amount)
{
	amount -= 3;
	if (amount < 0)
		return ;
	this->_hitpts -= amount;
}

SuperMutant		& SuperMutant::operator=(const SuperMutant &rhs)
{
	(Enemy)*this = (Enemy)rhs;
	return *this;
}
