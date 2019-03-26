/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:52:01 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 10:52:02 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);

		void					setType(std::string);
		const std::string &		getType();
	private :
		std::string		type;
};

#endif
