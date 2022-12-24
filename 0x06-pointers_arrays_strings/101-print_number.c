#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int i, m, c;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	m = i;
	c = 1;

	while (m > 9)
	{
		m /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((i / c) % 10) + 48);
	}
}
