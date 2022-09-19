#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints character in a astring
 * @str:The string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

