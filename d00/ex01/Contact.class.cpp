#include "Contact.class.hpp"

std::string		Contact::ToString() 
{
	std::string str;
	return str;
}
Contact::Contact()
{}
Contact::~Contact(void)
{}

bool Contact::SetFirstName(std::string value) 
{
	this->_first_name = value;
	return true;
}
bool Contact::SetLastName(std::string value)
{
	this->_last_name = value;
	return true;
}
bool Contact::SetNickname(std::string value) 
{
	this->_nickname = value;
	return true;
}
bool Contact::SetLogin(std::string value)
{
	this->_login = value;
	return true;
}
bool Contact::SetPostalAdress(std::string value)
{
	this->_postal_address = value;
	return true;
}
bool Contact::SetEmailAdress(std::string value)
{
	this->_email_adress = value;
	return true;
}
bool Contact::SetPhoneNumber(std::string value)
{
	this->_phone_number = value;
	return true;
}
bool Contact::SetBirthdayDate(std::string value)
{
	this->_birthday_date = value;
	return true;
}
bool Contact::SetFavoriteMeal(std::string value)
{
	this->_favorite_meal = value;
	return true;
}
bool Contact::SetUnderwearColor(std::string value)
{
	this->_underwear_color = value;
	return true;
}
bool Contact::SetDarkestSecret(std::string value)
{
	this->_darkest_secrey = value;
	return true;
}
