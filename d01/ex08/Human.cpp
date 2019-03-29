/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:00:06 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 12:24:10 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void		Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee Attack on " << target << std::endl;
}

void		Human::rangeAttack(std::string const & target)
{
	std::cout << "Range Attack on " << target << std::endl;
}

void		Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout on " << target << std::endl;
}

void		Human::action(std::string const &action_name, std::string const & target)
{
	void (Human::*f[3])(std::string const &);
	std::string		str[3];
	int				i = 0;

	str[0] = "meleeAttack";
	str[1] = "rangeAttack";
	str[2] = "intimidatingShout";
	f[0] = &Human::meleeAttack;
	f[1] = &Human::rangeAttack;
	f[2] = &Human::intimidatingShout;
	while (i < 3)
	{
		if (!action_name.compare(str[i]))
			(this->*(f[i]))(target);
		i++;
	}
}
