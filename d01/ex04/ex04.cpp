#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string		*ptr = &str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return 0;
}
