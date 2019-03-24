#include "Agenda.class.hpp"
#include <iostream>

Agenda::Agenda()
{
	_capacity = 2;
	_lenght = 0;
}

Agenda::~Agenda()
{
}

bool Agenda::Add(void) 
{
	if (this->_lenght >= this->_capacity)
	{
		return false;
	}

	Contact toadd(1);
	Agenda::Add(toadd);
	return true;
}

bool Agenda::Add(Contact toadd) 
{
	if (this->_lenght >= this->_capacity)
	{
		return false;
	}
	this->_lenght++;
	this->_contacts[_lenght - 1] = toadd;
	return true;
}

void Agenda::Display() 
{
	for (int i = 0; i < _lenght; i++) 
	{
		std::cout.width(10);
		std::cout.fill('.');
		std::cout << std::left << _contacts[i].GetFirstName() << std::endl;
		std::cout << std::left << _contacts[i].GetLastName() << std::endl;
		//std::cout << std::setw(10) << _contacts[i].GetFirstName() << std::endl;
	}
}
