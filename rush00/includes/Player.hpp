/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghippoda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:12:22 by ghippoda          #+#    #+#             */
/*   Updated: 2019/03/31 20:53:43 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include "AGameEntity.hpp"
# include "defines.hpp"
# include <string>
# include <ncurses.h>

# define NB_ACTION 4
# include "Weapon.hpp"

class Player : public AGameEntity
{
	public:
		typedef void	(Player::*fun_action)(void);
		struct Action
		{
			public :
				Action(int nkey, fun_action fun);

				int				key;
				fun_action		ptr;
		};
		Player(void);
		Player(const Player &src);
		Player(std::string name);
		virtual ~Player(void);

		Player &	operator=(const Player & rhs);
		virtual void		Update(void) ;
		virtual int		Collide(AGameEntity *other) ;//if this destroy other return 1 else return -1
		std::string		getName(void) const;
		int				getScore(void) const;
		void			moveRight(void);
		void			moveLeft(void);
		void			moveUp(void);
		void			moveDown(void);
		void 			doAction(int c);
		void			setScore(int point);

	private:
		int			_score;
		std::string	_name;
		static Action	_actions[NB_ACTION];
		void					init(void);
};

#endif
