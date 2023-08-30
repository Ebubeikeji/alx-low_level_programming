#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - function to check if a string is a palindrome.
 *
 * @s: The string to be checked.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] == s[end])
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

