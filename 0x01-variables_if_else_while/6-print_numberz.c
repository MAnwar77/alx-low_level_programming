#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print numbers with help from ASCII
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
