#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character.
 * Return: 1 if c is an uppercase character else return 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}