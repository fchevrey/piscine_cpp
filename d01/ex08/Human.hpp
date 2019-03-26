#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <string>

class Human
{
	private :
		void		meleeAttack(std::string const & target);
		void		rangeAttack(std::string const & target);
		void		intimidatingShout(std::string const & target);
	public :
		void		action(std::string const &action_name, std::string const & target);
};

#endif
