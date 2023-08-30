#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 *
 * @c: The character to be written.
 *
 * Return: 1 on success, -1 on error.
 */

int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 *
 * @s: The string to be printed in reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
