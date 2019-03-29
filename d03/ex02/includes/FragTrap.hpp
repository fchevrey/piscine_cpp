/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:50:51 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 21:32:44 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
# define NB_ATTACK 7

class FragTrap : public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & rhs);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			jumpAttack(std::string const & target);
		void			knokAttack(std::string const & target);
		void			fancyAttack(std::string const & target);
		void			shotgunAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
	private :
		void	(FragTrap::*_attacks[NB_ATTACK])(std::string const &);
		void			init(void);
		void			arrayInit(void);
};

#endif
