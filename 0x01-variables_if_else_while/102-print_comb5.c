#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_number;
	int second_number;

	for (first_number = 0; first_number <= 99; first_number++)
	{
		for (second_number = 0; second_number <= 99; second_number++)
		{
			if (first_number <= second_number)
			{
				putchar('0' + first_number / 10);
				putchar('0' + first_number % 10);
				putchar(' ');
				putchar('0' + second_number / 10);
				putchar('0' + second_number % 10);

				if (first_number < 99 || second_number < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
