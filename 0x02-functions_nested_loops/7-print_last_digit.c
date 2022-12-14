#include "main.h"

/**
 * print_last_digit - main entry point
 *
 *  @n: input number as an integer.
 *
 *  Return: last digit.
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
		last_d *= -1;

	_putchar(last_d + '0');
	return (last_d);
}
