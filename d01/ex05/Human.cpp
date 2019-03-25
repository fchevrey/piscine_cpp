#include "Human.hpp"

Human::Human(void)
{
}
Human::~Human(void)
{
}
std::string		Human::identify(void)
{
	return (this->_brain.identify());
}

Brain			Human::getBrain()
{
	return (this->_brain);
}
