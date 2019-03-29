/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:19:11 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 14:25:33 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle & src);
		virtual	~PlasmaRifle();
		virtual void	attack(void) const;

		PlasmaRifle &	operator=(const PlasmaRifle & rhs);
};

#endif
