#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @a:The digits printed
 * @n:The number of digits
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i = i + 1;
	}
	printf("\n");
}
