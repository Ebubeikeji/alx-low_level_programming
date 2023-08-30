#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: 1 on success, -1 on error.
 */

int _putchar(char c);

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
