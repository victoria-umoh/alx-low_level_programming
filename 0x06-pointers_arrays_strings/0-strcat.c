#include "main.h"

 /**
  * *_strcat - concatenation of 2 strings.
  * @dest: destination
  * @src: source
  * Return: the pointer to dest
  */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while
		(b >= 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
