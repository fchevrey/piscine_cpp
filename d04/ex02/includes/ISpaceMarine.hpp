/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:43:28 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/29 19:47:52 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public :
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine	*clone() const = 0;
		virtual void			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
