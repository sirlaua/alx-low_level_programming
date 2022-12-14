#include "main.h"
#include "main.h"

/**
 * Prints all natural numbers from n to 98.
 *
 * @n: input number.
 *
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);	
	}
	else 
		for (; n < 98; n++)
			printf("%d, ", n);
	printf("%d\n", n);
}
