#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int factorial(int n)
{

	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}

