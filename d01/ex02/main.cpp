/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 20:08:16 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 20:12:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		event;

	event.randomChump();
	event.setZombieType("Hungry");
	event.randomChump();
	Zombie *z = event.newZombie("Patato");
	z->Announce();
	event.setZombieType("Climbing");
	Zombie *zz = event.newZombie("Norbert");
	zz->Announce();
	delete(z);
	delete(zz);
	return 0;
}
