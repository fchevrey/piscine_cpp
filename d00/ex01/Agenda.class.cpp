#include "Agenda.class.hpp"
#include <iostream>

Agenda::Agenda()
{
	_capacity = 8;
	_length = 0;
}

Agenda::~Agenda()
{
}

int	Agenda::GetLength(void)
{
	return (this->_length);
}

bool Agenda::Add(void) 
{
	if (this->_length >= this->_capacity)
	{
		return false;
	}

	Contact toadd(1);
	Agenda::Add(toadd);
	return true;
}

bool Agenda::Add(Contact toadd) 
{
	if (this->_length >= this->_capacity)
	{
		return false;
	}
	this->_length++;
	this->_contacts[_length - 1] = toadd;
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

void	 Agenda::Display(int i) 
{
	if (i > this->_length || i < 0)
	{
		std::cout << "invalid command" << std::endl;
		return ;
	}
	std::cout << "First name : " << this->_contacts[i].GetFirstName() << std::endl;
	std::cout << "Last name : " << this->_contacts[i].GetLastName() << std::endl;
	std::cout << "Nickname : " << this->_contacts[i].GetNickname() << std::endl;
	std::cout << "Login : " << this->_contacts[i].GetLogin() << std::endl;
	std::cout << "Postal address : " << this->_contacts[i].GetPostalAddress() << std::endl;
	std::cout << "Email address : " << this->_contacts[i].GetEmailAddress() << std::endl;
	std::cout << "Phone number : " << this->_contacts[i].GetPhoneNumber() << std::endl;
	std::cout << "Birthday date : " << this->_contacts[i].GetBirthdayDate() << std::endl;
	std::cout << "Favorite meal " << this->_contacts[i].GetFavoriteMeal() << std::endl;
	std::cout << "Underwear color : " << this->_contacts[i].GetUnderwearColor() << std::endl;
	std::cout << "Darkest secret : " << this->_contacts[i].GetDarkestSecret() << std::endl;
}

void Agenda::Display() 
{
	std::cout.width(11);
	std::cout << "index|";
	std::cout.width(11);
	std::cout << "first name|";
	std::cout.width(11);
	std::cout << "last name|";
	std::cout.width(10);
	std::cout << "nickname" << std::endl;
	for (int i = 0; i < this->_length; i++) 
	{
		std::cout.width(10);
		std::cout << (i + 1);
		std::cout << std::right << "|" << TenLetters(this->_contacts[i].GetFirstName());
		std::cout << std::right << "|" << TenLetters(this->_contacts[i].GetLastName());
		std::cout << std::right << "|" << TenLetters(this->_contacts[i].GetNickname()) << std::endl;
		//std::cout << std::setw(10) << _contacts[i].GetFirstName() << std::endl;
	}
}
