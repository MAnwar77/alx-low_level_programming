#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print hexadecimal
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
