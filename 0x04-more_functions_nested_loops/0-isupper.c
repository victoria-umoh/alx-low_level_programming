#include "main.h"

/**
 * _isupper - checks for an upppercase characters
 * @c: the character to be check
 *
 * Return: 1 if the character is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
