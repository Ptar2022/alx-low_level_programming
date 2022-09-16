#include "main.h"

/**
 *
 *
 *
 *
 */

void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
