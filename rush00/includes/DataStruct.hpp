/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataStruct.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:34:35 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/31 17:06:54 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATASTRUCT_HPP
# define DATASTRUCT_HPP
# include "Player.hpp"
# include "Enemy.hpp"
# include "List.hpp"

struct DataStruct
{
	public :
		DataStruct(Pt sizegame, Pt sizescore);
		virtual		~DataStruct(void);

		void		Update();
		void		Add(AGameEntity *entity);
		void		Display() const;

		WINDOW		*gameWin;
		Pt			gameWinSize;
		WINDOW		*scoreWin;
		Pt			scoreWinSize;
		Player		*player;
		bool		is_finished(void)const ;
		void		AddEnemies(int nb);

	private :
		List		*_entities;
		void		checkCollisions(void);
		void		checkPlayerCollision(void);
		void		Erase(void);
		void		DisplaySprite(const Pt & pos, int spirte) const;
		void		DisplaySprite(const AGameEntity * entity) const;
		void		DisplayGameInfo(void) const;
};

#endif
