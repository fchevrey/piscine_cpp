#include <iostream>
#include <string>
#include "ZombieEvent.h"

int		main(void)
{
	ZombieEvent		event;

	event.randomChump();
	event.setZombieType("Hungry");
	event.randomChump();
	Zombie *z = event.newZombie("Patato");
	z->Announce();
	return 0;
}
