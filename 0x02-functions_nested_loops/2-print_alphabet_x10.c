#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times to the stdout
* Return: 0 on success
*/

void print_alphabet_x10(void)
{
    char c;
    int i = 1;

    while (i <= 10)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
        i++;
    }
}
