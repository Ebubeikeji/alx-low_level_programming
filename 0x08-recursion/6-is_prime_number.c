#include "main.h"

/**
 * is_prime_helper - Helper function to check if n is prime.
 *
 * @n: The integer to be checked.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 *
 * @n: The integer to be checked.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n / 2));
}
