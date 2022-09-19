#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swaps two integers
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
