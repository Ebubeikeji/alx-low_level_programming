#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints 10 times the alphabet.
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
