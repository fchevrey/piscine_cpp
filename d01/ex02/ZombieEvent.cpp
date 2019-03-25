/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:33 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 18:53:31 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>

ZombieEvent::ZombieEvent(void)
{
	this->_next_type = "none";
	this->_rd_names = new std::string[10] {"William", "Suzie", "Robert", "Nina", "Alan", "Judie",
		"Billy", "Carla", "Jimmy", "Rachel"};
}

ZombieEvent::~ZombieEvent(void)
{
	delete (this->_rd_names);
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_next_type = type;
}

Zombie		*ZombieEvent::NewZombie(std::string name)
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
