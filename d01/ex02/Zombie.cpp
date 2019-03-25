/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:43 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 18:21:45 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	public :
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	setZombieType(std::string type);
		void	Announce(void);


	private :
		std::string _type;
		std::string _name;
};

#endif
