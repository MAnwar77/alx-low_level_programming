#include "main.h"

/**
 * _isalpha - function to check if character is lower case
 *
 * @c: check input of the function
 *
 * Return: 1 if c is lowercase
 *        otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
