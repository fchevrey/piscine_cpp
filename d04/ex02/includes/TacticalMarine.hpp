/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:54:31 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 20:03:28 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public :
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine & src);
		virtual		~TacticalMarine();
		virtual ISpaceMarine	*clone() const ;
		virtual void			battleCry() const ;
		virtual void			rangedAttack() const ;
		virtual void			meleeAttack() const ;

		TacticalMarine &	operator=(const TacticalMarine & rhs);
};

#endif
