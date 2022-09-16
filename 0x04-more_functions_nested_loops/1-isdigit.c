#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Checks for a digit number between 0 and 9
 *
 * @c:The digit to be checked
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
