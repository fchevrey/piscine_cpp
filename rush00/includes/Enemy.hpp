/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:13:31 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 20:24:52 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include "Pt.hpp"
# include "AGameEntity.hpp"
# include "Weapon.hpp"
# include <stdlib.h>
# include <time.h>

class Enemy : public AGameEntity
{
	public:
		Enemy(void);
		Enemy(Pt pos);
		Enemy(const Enemy & src);
		virtual ~Enemy(void);

		Enemy &	operator=(const Enemy & rhs);
		virtual void			Update(void);
		virtual int				Collide(AGameEntity *other);
		virtual bool			TryShoot(void);

	private:
		bool		_half;
		void		init(void);

};

#endif
