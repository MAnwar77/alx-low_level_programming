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
	char ch = '0';

	while (ch <= 9)
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");

	return (0);
}
