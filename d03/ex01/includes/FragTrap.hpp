#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# define NB_ATTACK 7
class FragTrap
{
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap const & rhs);
		std::string		GetName(void) const;
		unsigned int	GetHP(void) const;
		unsigned int	GetMaxHP(void) const;
		unsigned int	GetEnergy(void) const;
		unsigned int	GetMaxEnergy(void) const;
		unsigned int	GetLevel(void) const;
		unsigned int	GetRangeDmg(void) const;
		unsigned int	GetMeleeDmg(void) const;
		unsigned int	GetArmor(void) const;
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			jumpAttack(std::string const & target);
		void			knokAttack(std::string const & target);
		void			fancyAttack(std::string const & target);
		void			shotgunAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			takeDammage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
	private :
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_max_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_max_energy_pts;
		unsigned int	_level;
		unsigned int	_melee_dmg;
		unsigned int	_range_dmg;
		unsigned int	_armor;
		void	(FragTrap::*_attacks[NB_ATTACK])(std::string const &);
		void			init(void);

		static			bool	_rand;
};

#endif
