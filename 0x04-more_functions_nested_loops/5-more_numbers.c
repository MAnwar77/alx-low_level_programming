#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int line, ch;

	for (line = 0; line <= 10; line++)
	{
		for (ch = 48; ch <= 4952; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
