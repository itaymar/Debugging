#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*ret++ = *src++)
		;
	return dest;
}

void part1()
{
	char password[] = "secret";
	char dest[13];
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
