#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: The string to check
 * Return: The length
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i = i + 1;
	}
	return count;
}

