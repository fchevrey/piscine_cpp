/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 21:13:50 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:20:06 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap  boss("Boss");
	ScavTrap  tic("tic");
	ClapTrap  daddy("daddy");
	NinjaTrap  nin("sakura");
	std::cout << "---" << std::endl;
	SuperTrap  super("Super");
	std::cout << "---" << std::endl;

	super.ninjaShoebox(boss);
	super.ninjaShoebox(tic);
	super.ninjaShoebox(daddy);
	super.ninjaShoebox(nin);
	super.vaulthunter_dot_exe(tic.GetName());
	super.vaulthunter_dot_exe(tic.GetName());
	super.vaulthunter_dot_exe(tic.GetName());
	super.takeDammage(12);
	super.beRepaired(100);
	super.meleeAttack(daddy.GetName());
	super.rangedAttack(daddy.GetName());
	return 0;
}
