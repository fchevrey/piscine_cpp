# include "ZombieHorde.hpp"
# include <stdlib.h>

bool ZombieHorde::_rd = false;

ZombieHorde::ZombieHorde(int N)
{
	this->_horde = nullptr;
	if (N <= 0)
		return ;
	if (!_rd)
		std::srand(time(0));
	_rd = true;
	std::string		init[] = {"William", "Suzie", "Robert", "Nina", "Alan",
		"Judie", "Billy", "Carla", "Jimmy", "Rachel"};
	for (int i = 0; i < 10; i++)
		this->_rd_names[i] = init[i];
	this->_size = N;
	this->_horde = new Zombie[N];
	for (int i = 0; i < this->_size; i++)
	{
		this->_horde[i].name = _rd_names[std::rand() % 10];
	}

}
ZombieHorde::~ZombieHorde(void)
{
	if (this->_horde != nullptr)
		delete [] (this->_horde);
}
void	ZombieHorde::announce(void)
{
	for (int i = 0; i < _size; i++)
	{
		this->_horde[i].announce();
	}
}
