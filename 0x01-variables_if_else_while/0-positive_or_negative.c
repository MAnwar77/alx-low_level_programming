#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: positive or negative
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if else(n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative", n);
	return (0);
}
