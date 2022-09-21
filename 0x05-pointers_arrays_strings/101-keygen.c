#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Generates the password
 * @characters: The characters to pick password from
 * @password: The generated password
 * Return: 0 if success, 1 otherwise 
 */
int main(void)
{
    char characters [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    char password[10];
    int i;

    srand((unsigned int) time(NULL));
    for (i = 0, i < 10; i++)
    {
        password[i] = characters[rand() % strlen(characters)];
        printf("%c", password[i]);
    }
    return (0)
}