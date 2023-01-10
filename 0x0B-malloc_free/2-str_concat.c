#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *tmp;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	tmp = malloc(sizeof(char) * (i + j + 1));

	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		tmp[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		tmp[k] = s2[j];

	return (tmp);
}
