#include "holberton.h"

/**
 * _isupper - checks for an upppercase character
 * @c: the character to check
 *
 * Return: 1 if the character is uppercase, otherwise 0
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
