#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Alwas 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

	return (0);
}
