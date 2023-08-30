#include "main.h"

/**
 * factorial - matheatical something
 *
 * @n: number whose factorial we are looking for.
 *
 * Return: factorial value or error (-1).
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
