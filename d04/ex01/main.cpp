/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:14:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/30 21:02:01 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void		test01(void)
{
	Character		hero("Lancelot");
	PowerFist		fist;
	PlasmaRifle		rifle;
	RadScorpion		*rad = new RadScorpion();
	SuperMutant		*mut = new SuperMutant();

	std::cout << hero << std::endl;
	hero.equip(&rifle);
	hero.attack(mut);
	std::cout << hero << std::endl;
	hero.equip(&fist);
	hero.attack(rad);
	std::cout << hero << std::endl;
	hero.attack(rad);
	std::cout << hero << std::endl;
	hero.recoverAP();
	std::cout << hero << std::endl;
	hero.recoverAP();
	hero.attack(mut);
	hero.attack(mut);
	std::cout << hero << std::endl;
	hero.attack(mut);
	hero.attack(mut);
	std::cout << " -- Test 01 end -> delete -- " << std::endl;
}
void		test02(void)
{
	Character		hero("Lancelot");
	AWeapon		*fist = new PowerFist();
	AWeapon		*rifle = new PlasmaRifle();
	Enemy		*rad = new RadScorpion();
	Enemy		*mut = new SuperMutant();

	std::cout << hero << std::endl;
	hero.equip(fist);
	std::cout << hero << std::endl;
	hero.attack(mut);
	hero.equip(rifle);
	std::cout << hero << std::endl;
	hero.attack(rad);
	std::cout << hero << std::endl;
	delete (fist);
	delete (rifle);
	delete (rad);
	delete (mut);
	std::cout << " -- Test 02 end -> delete -- " << std::endl;
}

void		test03(void)
{
	Character		hero("Lancelot");
	Character		other("Bob");
	PlasmaRifle		rifle;
	RadScorpion		*rad = new RadScorpion();

	hero.equip(&rifle);
	std::cout << hero << std::endl;
	std::cout << other << std::endl;
	hero.attack(rad);
	std::cout << hero << std::endl;
	other = hero;
	std::cout << " other = hero " << std::endl;
	std::cout << other << std::endl;
	std::cout << " -- Test 03 end -> delete -- " << std::endl;
	delete rad;
}

int main()
{
	std::cout << " Test 01 " << std::endl;
	test01();
	std::cout << std::endl<< " Test 02 : DERIVED " << std::endl;
	test02();
	std::cout << std::endl << " Test 03 : Equality" << std::endl;
	test03();
	return 0;
}
