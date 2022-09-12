#include <stdlib.h>
#include <stdio.h>

/*
* print_last_digit - Prints last digit of a number
* @c: The number to check
* Return: The last digit
*/
int print_last_digit(int c)
{
    int last = c % 10;

    if (last < 0)
    {
        last = last * -1;
    }
    return last;
}