#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Changes the value of a pointer
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	int p = 402;
	n = &p;
	*n = 98;
}

