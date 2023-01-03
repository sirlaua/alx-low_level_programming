#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int n = 0;

	for (; *(s + n) != '\0'; n++)
		if (*(s + n) == c)
			return (s + n);

	if (*(s + n) == c)
		return (s + n);

	return ('\0');
}
