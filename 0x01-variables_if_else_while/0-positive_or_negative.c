#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive\n");
	}
	if (n < 0)
	{
		printf("negative\n");
	}
	if (n == 0)
	{
		printf("zero\n");
	}

	return (0);
}
