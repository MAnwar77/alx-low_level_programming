#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all alphabet letters except e,q
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
