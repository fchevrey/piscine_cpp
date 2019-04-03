/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:58:39 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:28:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include "Pt.hpp"
# include "AGameEntity.hpp"
# include "defines.hpp"

class Weapon : public AGameEntity
{
	public:
		Weapon(void);
		Weapon(const Weapon & src);
		Weapon(Pt pos);
		Weapon(Pt pos, bool shoot_by_player);
		virtual ~Weapon(void);
		Weapon &	operator=(const Weapon & rhs);
		virtual void 	takeDamage(void);
		virtual void	Update(void);
		virtual int		Collide(AGameEntity *other);

	private:
		bool		_shoot_by_player;
		void		init(void);

};

#endif
