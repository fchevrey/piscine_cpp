#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon		club = Weapon("crude spiked club");

		HumanA Jim("Jim", club);
		Jim.attack();
		club.setType("some other type of club");
		Jim.attack();
	}
	return 0;
}
