#include "main.h"

/**
 *  _islower  - Start of progoram
 *
 * @c: letter
 *
 *  Description: checks for lowercase character.
 *
 *  Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	return (0);
}
