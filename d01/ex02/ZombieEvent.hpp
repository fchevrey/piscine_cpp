/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:37 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 20:09:04 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>

class ZombieEvent
{
	public :
		ZombieEvent(void);
		~ZombieEvent(void);
		
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
		void	randomChump(void);

	private :
		std::string _next_type;
		std::string _rd_names[10];
};

#endif