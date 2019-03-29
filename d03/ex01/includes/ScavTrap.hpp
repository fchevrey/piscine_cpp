#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# define NB_CHALLENGES 5

class ScavTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & rhs);
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
		void			diceChallenge(std::string const & target);
		void			yoMamaFightChallenge(std::string const & target);
		void			cardChallenge(std::string const & target);
		void			thumbFightChallenge(std::string const & target);
		void			paperScissorStoneChallenge(std::string const & target);
		void			takeDammage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
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
		void	(ScavTrap::*_challenges[NB_CHALLENGES])(std::string const &);
		void			init(void);

		static			bool	_rand;
};

#endif
