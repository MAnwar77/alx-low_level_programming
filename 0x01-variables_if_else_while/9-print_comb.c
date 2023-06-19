#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all alphabet letters
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 9;

	while (digit >= 0)
	{
		putchar(digit);
		digit--;
	}
	putchar('\n');

	return (0);
}
