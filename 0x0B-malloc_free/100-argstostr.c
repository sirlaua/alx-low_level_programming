#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 *
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int i, j, n;
	int sumlen = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sumlen++;
		sumlen++;
	}
	sumlen++;

	arg_concat = malloc(sumlen * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n++)
		{
			arg_concat[n] = av[i][j];
		}
		arg_concat[n] = '\n';
		n++;
	}
	return (arg_concat);
}
