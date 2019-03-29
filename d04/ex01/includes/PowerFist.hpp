/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:19:16 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 14:27:10 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist(void);
		PowerFist(const PowerFist & src);
		virtual			~PowerFist();
		virtual void	attack(void) const;

		PowerFist &	operator=(const PowerFist & rhs);
};

#endif
