/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:18:58 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 14:19:01 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <string>

class AWeapon
{
	public :
		AWeapon(const std::string &name, int apcost, int damage);
		AWeapon(const AWeapon &src);
		virtual		~AWeapon();

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

		AWeapon &	operator=(const AWeapon &rhs);
	protected :
		std::string		_name;
		int				_APcost;
		int				_dmg;
		AWeapon(void);
};

#endif
