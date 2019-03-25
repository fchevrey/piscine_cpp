#include "ZombieHorde.hpp"
#include <iostream>

void		create_horde(int N)
{
	ZombieHorde		horde(N);

	horde.announce();
}

int main(void)
{
	create_horde(5);
	std::cout << "---" << std::endl;
	create_horde(3);
	return 0;
}
