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

static std::string	TenLetters(std::string src)
{
	std::string dst(10, ' ');
	if ( src.length() == 10)
	{
		return (src);
	}
	if (src.length() > 10)
	{
		dst = src.substr(0,10);
		dst[9] = '.';
		return (dst);
	}
	else
	{
		//size_t len = dst.lenght();
		dst.replace(10 - src.length(), src.length(), src);
		return (dst);	
	}
	return (src);
}

void Agenda::Display() 
{
	for (int i = 0; i < _lenght; i++) 
	{
		std::cout.width(11);
		std::cout << "index|";
		std::cout << "first name|";
		std::cout << "last name |";
		std::cout << "nickname |" << std::endl;
		std::cout.width(11);
		std::cout << i;
		std::cout << std::right "|" << TenLetters(_contacts[i].GetFirstName());
		std::cout << std::right << "|" << TenLetters(_contacts[i].GetLastName());
		std::cout << std::right << "|" << TenLetters(_contacts[i].GetNickname()) << std::endl;
		//std::cout << std::setw(10) << _contacts[i].GetFirstName() << std::endl;
	}
}
