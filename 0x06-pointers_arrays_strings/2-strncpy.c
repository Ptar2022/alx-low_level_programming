#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Copies string 
 * @n: The number of strings
 * @dest: The destination to copy
 * @src: The copy source
 * Return: A character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    while (src[i] != '\0' && i < n)
    {
        dest[i] == src[i];
        i = i + 1;
        dest[i] = '\0';
    }
    return (dest);
}