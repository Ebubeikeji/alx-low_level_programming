#include <stdio.h>
#include <time.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	time_t current_time;
	struct tm *time_info;

	time(&current_time);
	time_info = localtime(&current_time);

	n = time_info->tm_sec % 10;

	printf("The number: %d\n", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
