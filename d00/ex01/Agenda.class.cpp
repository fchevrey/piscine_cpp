#include "Agenda.class.hpp"
#include <iostream>



Agenda::Agenda()
{
	_capacity = 8;
	_lenght = 0;
}

Agenda::~Agenda()
{
}

bool Agenda::Add(Contact toadd) 
{
	if (_lenght >= _capacity)
	{
		return false;
	}
	_lenght++;
	_contacts[_lenght - 1] = toadd;
	return true;
}
void Agenda::Display() 
{
	for (int i = 0; i < _lenght; i++) 
	{
		std::cout << _contacts[i].ToString() << std::endl;
	}
}
