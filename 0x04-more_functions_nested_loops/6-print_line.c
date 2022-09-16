#include <stdlib.h>
#include "main.h"

/**
 * print_line - Prints a line to the stdout
 * @n: The number of times to print the line
 *
 * Return: Nothing
 */

void print_line(int n)
{
	if ( n > 0)
	{
		for (n = 1; n <= 6; n++)
		{
			_putchar('_');
		}

	}

	else
	{
		_putchar('\n');
	}
}
