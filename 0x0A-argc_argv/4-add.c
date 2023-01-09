#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array that contains the program command line arguments
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int n, i, j;

	n = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
