/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:18:52 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 16:15:45 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
	public :
		Enemy(int hp, const std::string & type);
		Enemy(const Enemy & src);
		virtual			~Enemy();
		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDammage(int amount);
		Enemy &	operator=(const Enemy & rhs);
	protected :
		int				_hitpts;
		std::string		_type;
	private :
		Enemy(void);
};

#endif
