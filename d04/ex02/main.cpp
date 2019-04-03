/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:14:08 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 21:07:06 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include <iostream>
void fun(ISpaceMarine *bob, ISpaceMarine *jim)
{
	std::cout << " -- mine --" << std::endl;
	Squad* AA = new Squad;
	AA->push(bob);
	AA->push(bob);
	AA->push(jim);
	AA->push(jim);
	AA->push(bob);
	Squad* vlc2 = new Squad(*AA);
	std::cout << "  == " << std::endl;
	*AA = *vlc2;
	std::cout << "  == " << std::endl;
	delete vlc2;
	delete AA;
}
int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	std::cout << "initial main" << std::endl;
	vlc->push(bob);vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	fun(bob, jim);
	delete bob;
	delete jim;
	while (1);
	return 0;
}
