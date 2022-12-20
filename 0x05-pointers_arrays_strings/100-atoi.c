#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int numb = 0;
	int min = 1;
	int n = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			n = 1;
			numb = (numb * 10) + (s[c] - '0');
			c++;
		}
		if (n == 1)
		{
			break;
		}
		c++;
	}
	numb *= min;
	return (numb);
}
