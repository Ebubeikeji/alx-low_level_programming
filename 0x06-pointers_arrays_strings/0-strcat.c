#include "main.h"

/**
 * _strcat - Links two strings
 *
 * @dest: The destination string where the concatenation will be stored.
 *@src: The source string that will be concatenated to the destination.
 *
 * Return: A pointer to the resulting concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
