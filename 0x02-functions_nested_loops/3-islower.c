#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lower case character
 * @c:The character to check
 * Return: 0 if lowercase, 1 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
