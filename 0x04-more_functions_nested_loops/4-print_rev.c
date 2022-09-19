#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		_putchar(s - 1);
		i++;
	}
}

