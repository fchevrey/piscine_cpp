#include "FragTrap.hpp"

int main(void)
{
	FragTrap  jonny;
	FragTrap  robert("Robert");
	FragTrap  pouet = robert;

	jonny.takeDammage(10);
	jonny = robert;
	jonny.takeDammage(10);
	pouet.takeDammage(45);
	pouet.vaulthunter_dot_exe(jonny.GetName());
	robert.rangedAttack(jonny.GetName());
	robert.vaulthunter_dot_exe(jonny.GetName());
	robert.meleeAttack(jonny.GetName());
	robert.takeDammage(55);
	robert.takeDammage(45);
	robert.takeDammage(1);
	robert.beRepaired(200);
	robert.beRepaired(200);
	robert.vaulthunter_dot_exe(jonny.GetName());
	robert.vaulthunter_dot_exe(jonny.GetName());
	robert.vaulthunter_dot_exe(jonny.GetName());
	robert.vaulthunter_dot_exe(jonny.GetName());
	robert.vaulthunter_dot_exe(jonny.GetName());
	return 0;
}
