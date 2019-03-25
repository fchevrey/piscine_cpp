#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
	public :
		Human(void);
		~Human(void);
		std::string		identify(void);
		Brain			getBrain();
	private :
		Brain		_brain;
};

#endif
