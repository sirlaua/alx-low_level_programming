#include "main.h"

/**
 * rev_string - reverses strings
 * @s: input parameter
 * Return: no return
 */
void rev_string(char *s)
{
	int n, size, half;
	char first, last;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	size = n - 1;
	half = size / 2;
	while (half >= 0)
	{
		first = s[size - half];
		last = s[half];
		s[half] = first;
		s[size - half] = last;
		half--;
	}
}
