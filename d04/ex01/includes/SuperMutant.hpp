/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:19:27 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:34:38 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public :
		SuperMutant(void);
		SuperMutant(const SuperMutant & src);
		virtual		~SuperMutant();

		virtual void	takeDammage(int amount);
		SuperMutant &	operator=(const SuperMutant  & rhs);
};

#endif
