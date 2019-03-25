#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		&ref = str;
	std::string		*ptr = &str;

	std::cout << ref << std::endl;
	std::cout << *ptr << std::endl;
	return 0;
}
