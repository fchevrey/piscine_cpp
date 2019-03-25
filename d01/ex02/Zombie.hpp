/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:21:40 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/25 18:21:48 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

class Zombie
{
	public :
		Zombie(void);
		~Zombie(void);

		void	Announce(void);
		std::string type;
		std::string name;
};

#endif
