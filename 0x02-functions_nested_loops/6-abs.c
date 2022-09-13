#include <stdlib.h>
#include "main.h"

/*
 * _abs - Checks the absolute value of the number
 * @c:The checked number
 * Return - Integer value
 */

int _abs(int c)
{
	int abs;

	if (c < 0)
	{
		abs = c * -1;
		return (abs);
	}

	else
	{
		return (c);
	}
}
