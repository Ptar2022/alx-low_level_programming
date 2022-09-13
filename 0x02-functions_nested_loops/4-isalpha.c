#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/*
* _isalpha - Checks if alphabet, lower or upper
* @c:Integer variable
* Return 1 if condition met, 0 otherwise
*/

int _isalpha(int c)
{
    if (c >= 65 && c <= 99)
    {
        if (c >= 65 && c <= 122)
        {
            return (1);
        }
    }
    return (0);
}