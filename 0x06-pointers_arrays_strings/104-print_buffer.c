#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int n, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (n = 0; n < size; n += 10)
		{
			printf("%.8x:", n);
			for (j = n; j < n + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (k = n; k < n + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
