#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Checks the length of a line
 * @s: The character checking length
 * Return: Integer length of a line
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count = count + 1;
		i = i + 1;
	}
	return (count);
}
