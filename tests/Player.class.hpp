/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 16:34:46 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 16:50:28 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

class Player
{
	public:

	Player(char *na, char *ra, char *cla, int l);
	~Player(void);
	void	lvlup(void);

	private:

	char	*name;
	char	*race;
	char	*clas;
	int		lvl;
};

#endif
