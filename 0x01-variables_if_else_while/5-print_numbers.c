#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
