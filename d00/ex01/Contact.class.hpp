/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 19:11:31 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 19:53:23 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>
# include <ctime>
# include <iomanip>

class	Contact
{
	public :

	Contact(void);
	~Contact(void);
	bool	fill(void);
	private :
	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_login;
	std::string		_postal_address;
	std::string		_email_adress;
	std::string		_phone_number;
	std::string		_birthday_date;//must be a date
	std::string		_favorite_meal;
	std::string		_underwear_color;
	std::string		_darkest_secrey;
};
#endif
