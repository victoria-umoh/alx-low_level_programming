#include "main.h"

 /**
  * *_strcat - concatenation of 2 strings.
  * @dest: destination
  * @src: source
  * Return: the pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0' x++)
		;
	for (y = 0; src[j] != '\0' y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
