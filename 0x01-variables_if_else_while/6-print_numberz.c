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
	char ch = 49;

	while (ch <= 57)
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");

	return (0);
}
