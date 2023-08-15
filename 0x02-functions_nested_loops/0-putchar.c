#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints _putchar without using printf
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sentence[] = "_putchar";

	int i;

	for (i = 0; sentence[i] != '\0'; i++)
	{
		_putchar(sentence[i]);
	}

	_putchar('\n');

	return (0);
}
