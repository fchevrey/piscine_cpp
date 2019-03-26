/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 10:51:46 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:36 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon & weapon);
		~HumanA(void);

		void	attack(void);

	private :
		Weapon		&	_weapon;
		std::string		_name;
};

#endif
