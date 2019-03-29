/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:19:05 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 16:58:48 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class Character
{
	public :
		Character(const std::string &name);
		Character(const Character & src);
		virtual			~Character();
		void			recoverAP();
		void			equip(AWeapon *weapon);
		void			attack(Enemy *enemy);
		std::string		getName() const;
		int				getAP(void) const;
		AWeapon			*getWeapon(void) const;

		Character &	operator=(const Character & rhs);
	private :
		Character(void);
		std::string		_name;
		int				_ap;
		AWeapon			*_weapon;
};
std::ostream	&operator << (std::ostream &os, const Character & rhs);

#endif
