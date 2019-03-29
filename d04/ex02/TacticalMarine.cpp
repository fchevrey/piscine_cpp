/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:04:43 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 20:12:55 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &)
{
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine * TacticalMarine::clone() const
{
	return (new TacticalMarine());
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &)
{
	return *this;
}
