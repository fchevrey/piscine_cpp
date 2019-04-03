/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boss.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:37:15 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 20:37:16 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOSS_HPP
# define BOSS_HPP

# include "Enemy.hpp"
# define BOSS_MOVE 9

class Boss : public Enemy
{
	public :
		typedef void	(Boss::*fun_boss_move)(void);
		Boss(void);
		Boss(const Boss & src);
		virtual		~Boss();

		virtual bool		TryShoot(void);
		virtual void		Update(void);
		Boss &	operator=(const Boss & rhs);
	private:
		static fun_boss_move	_moves[BOSS_MOVE];
		void		moveLeft(void);
		void		moveUp(void);
		void		moveDown(void);
		int			_pattern;
};

#endif
