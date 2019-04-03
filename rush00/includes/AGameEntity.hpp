/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AGameEntity.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:12:08 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:17:56 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMEENTITY_HPP
# define AGAMEENTITY_HPP
# include "Pt.hpp"
# include "defines.hpp"
class AGameEntity
{
	public:
		AGameEntity(void){}
		AGameEntity(const AGameEntity & src);
		virtual ~AGameEntity(void) {}
		AGameEntity &	operator=(const AGameEntity & rhs);

		virtual void	Update(void) = 0;
		virtual int		Collide(AGameEntity *other) = 0;
		Pt				getPos(void) const;
		int				getColor(void) const;
		int				getNbLife(void)const;
		int				getType(void) const;
		int				getSprite(void) const;
		virtual void 	takeDamage();
		void			setPos(int x, int y);

	protected:
		Pt		_pos;
		int		_sprite;
		int		_color;
		int		_nbLife;
		int		_type;
		static const Pt		_size_world;
};

#endif
