/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:14:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:59:34 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
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
	return 0;
}
