#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
	public :
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);

	private :
		static bool		_rd;
		std::string		_rd_names[10];
		int				_size;
		Zombie			*_horde;
};

#endif
