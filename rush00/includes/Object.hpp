/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:00:36 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 19:29:30 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Object_HPP
# define Object_HPP
# include "Pt.hpp"
# include "AGameEntity.hpp"
# include "Player.hpp"

class Object : public AGameEntity
{
	public:
		Object(void);
		Object(const Object & src);
		virtual		~Object(void);
		Object &	operator=(const Object & rhs);

		virtual void	Update(void);
		virtual int		Collide(AGameEntity *other);
	private:
		void					init(void);
};

#endif
