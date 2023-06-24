#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - function that prints the numbers, from 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch == 50 || ch == 52)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
