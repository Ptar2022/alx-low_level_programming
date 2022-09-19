#include <stdlib.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s:The string to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int c;

	while (s[i] != '\0')
	{
		c++;
	}

	for (c = c - 1; c >= 0; c--)
	{
		_putchar(c);
	}
}

