#include "main.h"

/**
* leet - encodes a string into 1337.
* @s: The string
* Return: char string
*/

char *leet(char *s)
{
	int i, n;
	char subs[] = "aAeEoOtTlL";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; subs[n] != '\0'; n++)
		if (s[i] == subs[n])
		{
			s[i] = num[n / 2];
		}
	}
	return (s);
}
