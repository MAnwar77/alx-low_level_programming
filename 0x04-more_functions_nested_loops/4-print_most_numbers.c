#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - function that prints the numbers except 2 and 4
*/

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 2 || ch == 4)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
