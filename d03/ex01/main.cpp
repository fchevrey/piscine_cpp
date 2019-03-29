/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:33:08 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:37:31 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap  boss("Boss");
	ScavTrap  tic("tic");


	tic.takeDammage(20);
	tic.beRepaired(150);
	tic.takeDammage(175);
	tic.beRepaired(150);
	tic.rangedAttack(boss.GetName());
	tic.challengeNewcomer(boss.GetName());
	tic.challengeNewcomer(boss.GetName());
	tic.challengeNewcomer(boss.GetName());
	boss.rangedAttack(tic.GetName());
	boss.vaulthunter_dot_exe(tic.GetName());
	boss.meleeAttack(tic.GetName());
	boss.takeDammage(55);
	boss.beRepaired(200);
	boss.vaulthunter_dot_exe(tic.GetName());
	boss.vaulthunter_dot_exe(tic.GetName());
	boss.vaulthunter_dot_exe(tic.GetName());
	boss.vaulthunter_dot_exe(tic.GetName());
	return 0;
}
