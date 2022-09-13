#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*
 * print_alphabet - TCheck the condition
 * @c: The character printer
 * Return: Nothing returned
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++ )
	{
		_putchar(c);
	}
	_putchar('\n');
}
