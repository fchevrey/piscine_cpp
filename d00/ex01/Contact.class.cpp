#include "Contact.class.hpp"
std::string		ToString() 
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
}
bool Contact::SetLastName(std::string value)
{
	this->_last_name = value;
}
bool Contact::SetNickname(std::string value) 
{
	this->_nickname = value;
}
bool Contact::SetLogin(std::string value)
{
	this->_login = value;
}
bool Contact::SetPostalAdress(std::string value)
{
	this->_postal_address = value;
}
bool Contact::SetEmailAdress(std::string value)
{
	this->_email_adress = value;
}
bool Contact::SetPhoneNumber(std::string value)
{
	this->_phone_number = value;
}
bool Contact::SetBirthdayDate(std::string value)
{
	this->_birthday_date = value;
}
bool Contact::SetFavoriteMeal(std::string value)
{
	this->_favorite_meal = value;
}
bool Contact::SetUnderwearColor(std::string value)
{
	this->_underwear_color = value;
}
bool Contact::SetDarkestSecret(std::string value)
{
	this->_darkest_secrey = value;
}