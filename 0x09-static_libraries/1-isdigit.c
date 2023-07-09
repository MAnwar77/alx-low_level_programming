#include "main.h"
#include <stdio.h>

/**
* _isdigit - function that checks for a digit from 0 to 9
*
* @c: check input of the function
*
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
