/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:48:52 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 10:48:54 by fchevrey         ###   ########.fr       */
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
	z->announce();
	event.setZombieType("Climbing");
	Zombie *zz = event.newZombie("Norbert");
	zz->announce();
	event.randomChump();
	delete(z);
	delete(zz);
	return 0;
}
