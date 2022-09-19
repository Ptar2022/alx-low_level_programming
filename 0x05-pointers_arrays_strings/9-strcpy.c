#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - Copies the string
 * @dest: The destination
 * @src: The source
 * Return: A character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i++] = '\0';
	return dest;
}
