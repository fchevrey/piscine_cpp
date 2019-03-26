/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:51:51 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 11:30:59 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon & weapon);

	private :
		Weapon			*_weapon;
		std::string		_name;
};

#endif
