#include "main.h"

int helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: The number for which to calculate the square root.
 *
 * Return: the result or error (-1).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (helper(n, 1));
	}
}

/**
 * helper - Helper function to find the square root recursively.
 *
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: natural square root or error (-1).
 */

int helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, guess + 1));
	}
}
