/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 11:29:07 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 11:29:13 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <ctime>
# include <iomanip>
# include <iostream>

class	Contact
{
	public :

	Contact(void);
	Contact(int i);
	~Contact(void);
	bool			fill(void);
	std::string		ToString();
	std::string GetFirstName(void);
	std::string GetLastName(void);
	std::string GetNickname(void);
	std::string GetLogin(void);
	std::string GetPostalAddress(void);
	std::string GetEmailAddress(void);
	std::string GetPhoneNumber(void);
	std::string GetBirthdayDate(void);
	std::string GetFavoriteMeal(void);
	std::string GetUnderwearColor(void);
	std::string GetDarkestSecret(void);
	bool SetFirstName(std::string value);
	bool SetLastName(std::string value);
	bool SetNickname(std::string value);
	bool SetLogin(std::string value);
	bool SetPostalAddress(std::string value);
	bool SetEmailAddress(std::string value);
	bool SetPhoneNumber(std::string value);
	bool SetBirthdayDate(std::string value);//
	bool SetFavoriteMeal(std::string value);
	bool SetUnderwearColor(std::string value);//
	bool SetDarkestSecret(std::string value);

	private :
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_address;
	std::string		_phone_number;
	std::string		_birthday_date;//must be a date
	std::string		_favorite_meal;
	std::string		_underwear_color;//color ? or int
	std::string		_darkest_secret;
};
#endif
