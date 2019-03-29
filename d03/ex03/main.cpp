/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:33:08 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:37:54 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	ClapTrap  daddy("daddy");
	FragTrap  boss("Boss");
	ScavTrap  tic("tic");
	NinjaTrap ninja("sakura");
	NinjaTrap shizune("shizune");

	ninja.meleeAttack(daddy.GetName());
	ninja.rangedAttack(daddy.GetName());
	ninja.takeDammage(20);
	ninja.beRepaired(0);
	ninja.takeDammage(20);
	ninja.ninjaShoebox(daddy);
	ninja.ninjaShoebox(tic);
	ninja.ninjaShoebox(boss);
	ninja.ninjaShoebox(shizune);
	return 0;
}
