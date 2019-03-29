#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
# define NB_CHALLENGES 5

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap const & rhs);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			diceChallenge(std::string const & target);
		void			yoMamaFightChallenge(std::string const & target);
		void			cardChallenge(std::string const & target);
		void			thumbFightChallenge(std::string const & target);
		void			paperScissorStoneChallenge(std::string const & target);
		void			challengeNewcomer(std::string const & target);
	private :
		void	(ScavTrap::*_challenges[NB_CHALLENGES])(std::string const &);
		void			init(void);
		void			arrayInit(void);
};

#endif
