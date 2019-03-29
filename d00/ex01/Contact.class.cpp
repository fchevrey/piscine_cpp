/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 11:28:40 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 11:29:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string		Contact::ToString() 
{
	std::string str;

	//if (this->_first_name.lenght > 10)
	//str << std::setw(10) << this->_first_name << std::endl;
	return str;
}

Contact::Contact()
{	
}

Contact::Contact(int i)
{
	if ( i == -1)
		return ;
	std::string input;

	std::cout << "enter the first name :" << std::endl;
	std::cin >> input;
	SetFirstName(input);
	std::cout << "enter the last name :" << std::endl;
	std::cin >> input;
	SetLastName(input);
	std::cout << "enter the nickname :" << std::endl;
	std::cin >> input;
	SetNickname(input);
	std::cout << "enter the login :" << std::endl;
	std::cin >> input;
	SetLogin(input);
	std::cout << "enter the postal adress :" << std::endl;
	std::cin >> input;
	SetPostalAddress(input);
	std::cout << "enter the email adress :" << std::endl;
	std::cin >> input;
	SetEmailAddress(input);
	std::cout << "enter the phone number :" << std::endl;
	std::cin >> input;
	SetPhoneNumber(input);
	std::cout << "enter the birthday date :" << std::endl;
	std::cin >> input;
	SetBirthdayDate(input);
	std::cout << "enter the favorite meal :" << std::endl;
	std::cin >> input;
	SetFavoriteMeal(input);
	std::cout << "enter the Underwear color :" << std::endl;
	std::cin >> input;
	SetUnderwearColor(input);
	std::cout << "enter the darkest secret :" << std::endl;
	std::cin >> input;
	SetDarkestSecret(input);
}
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
bool Contact::SetPostalAddress(std::string value)
{
	this->_postal_address = value;
	return true;
}
bool Contact::SetEmailAddress(std::string value)
{
	this->_email_address = value;
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
	this->_darkest_secret = value;
	return true;
}

std::string	Contact::GetFirstName(void)
{
	return (this->_first_name);
}
std::string	Contact::GetLastName(void)
{
	return (this->_last_name);
}
std::string	Contact::GetNickname(void)
{
	return (this->_nickname);
}
std::string	Contact::GetLogin(void)
{
	return (this->_login);
}
std::string	Contact::GetPostalAddress(void)
{
	return (this->_postal_address);
}
std::string	Contact::GetEmailAddress(void)
{
	return (this->_email_address);
}
std::string	Contact::GetPhoneNumber(void)
{
	return (this->_phone_number);
}
std::string	Contact::GetBirthdayDate(void)
{
	return (this->_birthday_date);
}
std::string	Contact::GetFavoriteMeal(void)
{
	return (this->_favorite_meal);
}
std::string	Contact::GetUnderwearColor(void)
{
	return (this->_underwear_color);
}
std::string	Contact::GetDarkestSecret(void)
{
	return (this->_darkest_secret);
}
