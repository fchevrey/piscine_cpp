/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:33 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 20:09:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

ZombieEvent::ZombieEvent(void)
{
	std::string		init[] = {"William", "Suzie", "Robert", "Nina", "Alan",
		"Judie", "Billy", "Carla", "Jimmy", "Rachel"};
	this->_next_type = "none";
	for (int i = 0; i < 10; i++)
		this->_rd_names[i] = init[i];
}

ZombieEvent::~ZombieEvent(void)
{
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_next_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie		*z = new Zombie();
	
	z->name = name;
	z->type = this->_next_type;
	return (z);
}

void		ZombieEvent::randomChump(void)
{
	Zombie		chump;

	chump.name = this->_rd_names[std::rand() % 10];
	chump.type = this->_next_type;
	chump.Announce();
}
