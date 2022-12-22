#include "main.h"

/**
  * string_toupper - function changes all lowercase letters
  * to uppercase.
  * @p: The string will be modified
  *
  * Return: character
  */
char *string_toupper(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] >= 97 && s[n] <= 122)
		{
			s[n] -= 32;
		}

		n++;
	}

	return (s);
}
