#include "main.h"

/**
* puts2 - Puts the string alternatively
* @str: The string
* Return void
*/
void puts2(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    for (j = 0; j < i; j = j + 2)
    {
        _putchar(str[j]);
    }
    _putchar('\n');

}