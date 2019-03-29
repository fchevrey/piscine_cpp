/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:01:25 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 20:04:03 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
	public :
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator & src);
		virtual		~AssaultTerminator();
		virtual ISpaceMarine	*clone() const ;
		virtual void			battleCry() const ;
		virtual void			rangedAttack() const ;
		virtual void			meleeAttack() const ;

		AssaultTerminator &	operator=(const AssaultTerminator & rhs);
};

#endif
