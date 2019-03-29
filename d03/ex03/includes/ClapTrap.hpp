/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchevrey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:41:56 by fchevrey          #+#    #+#             */
/*   Updated: 2019/03/28 19:10:21 by fchevrey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
	public :
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & rhs);
		std::string			GetName(void) const;
		unsigned int		GetHP(void) const;
		unsigned int		GetMaxHP(void) const;
		unsigned int		GetEnergy(void) const;
		unsigned int		GetMaxEnergy(void) const;
		unsigned int		GetLevel(void) const;
		unsigned int		GetRangeDmg(void) const;
		unsigned int		GetMeleeDmg(void) const;
		unsigned int		GetArmor(void) const;
		void				rangeAttack(std::string const & target);
		void				meleeAttack(std::string const & target);
		void				takeDammage(unsigned int amount);
		void				beRepaired(unsigned int amount);
	protected :
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_max_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_max_energy_pts;
		unsigned int	_level;
		unsigned int	_melee_dmg;
		unsigned int	_range_dmg;
		unsigned int	_armor;

	private :
		static			bool	_rand;
		void				init(void);
};

#endif
