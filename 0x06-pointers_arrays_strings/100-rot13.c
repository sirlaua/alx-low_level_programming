#include "main.h"
/**
 * rot13 - function encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest.
 */
char *rot13(char *s)
{
	int a = 0, n;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + a) != '\0')
	{
		for (n = 0; n < 52; n++)
		{
			if (*(s + a) == letters[n])
			{
				*(s + a) = rot13[n];
				break;
			}
		}
		a++;
	}

	return (s);
}
