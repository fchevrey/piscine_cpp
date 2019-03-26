#include "Human.hpp"
int main(void)
{
	Human man;

	man.action("meleeAttack", "close big guy");
	man.action("fancy stuff", "public");
	man.action("rangeAttack", "far dude");
	man.action("intimidatingShout", "weaky one");
	man.action("big punch", "last man standing");
	man.action("", "");
	return 0;
}
