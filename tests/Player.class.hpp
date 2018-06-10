/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 16:34:46 by fchevrey          #+#    #+#             */
/*   Updated: 2018/06/10 17:20:49 by fchevrey         ###   ########.fr       */
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
	char	*getname(void) const ;
	char	*getrace(void) const ;
	char	*getclas(void) const ;
	int		getlvl(void) const;
	void	setname(char *);
	void	setrace(char *);
	void	setclas(char *);
	void	setlvl(int);

	private:

	char	*_name;
	char	*_race;
	char	*_clas;
	int		_lvl;
};

#endif
