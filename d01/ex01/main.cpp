#include <iostream>

void	memoryLeak();

int main(void)
{
	memoryLeak();
	memoryLeak();
	memoryLeak();
	while (1);
	return 0;
}
