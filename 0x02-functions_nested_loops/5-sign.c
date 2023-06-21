#include "main.h"

/**
 * print_sign - print + if n greater than zero
 * print 0 if n equal zero
 * print - if n smaller than zero
 *
 * @n: takes integer type input of the function
 *
 * Return: 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n");
			return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
			return (0);
	}
	else
	{
		printf("-\n");
			return (-1);
	}
}
