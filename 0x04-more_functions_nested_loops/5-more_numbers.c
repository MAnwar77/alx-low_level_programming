#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int line, ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 48; ch <= 57; ch++)
		{
			if (ch > 57)
			{
				_putchar(49 + 48);
				ch = ch % 4948;
			}
			_putchar(ch + 48);
		_putchar('\n');
	}
}
