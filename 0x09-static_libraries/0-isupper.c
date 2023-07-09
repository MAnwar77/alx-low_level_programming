#include "main.h"
#include <stdio.h>

/**
* _isupper - function that checks for uppercase character
*
* @c: check input of the function
*
* Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
