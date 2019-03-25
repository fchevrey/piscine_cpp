#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);

		void					setType(std::string);
		const std::string &		getType();
	private :
		std::string		type;
};

#endif
