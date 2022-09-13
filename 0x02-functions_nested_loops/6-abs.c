#include <stdlib.h>
#include "main.h"

/*
* _abs - Checks the absolute value of the number
* @c:The checked number
* Return - Integer value
*/

int _abs(int c)
{
    if (c < 0)
    {
        int abs = c * -1;
        return (abs);
    }
    else
    {
        return (c);
    }
}