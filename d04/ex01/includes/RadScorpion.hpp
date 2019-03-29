/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:19:20 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 17:34:42 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public :
		RadScorpion(void);
		RadScorpion(const RadScorpion & src);
		virtual		~RadScorpion();

		RadScorpion &	operator=(const RadScorpion & rhs);
};

#endif
