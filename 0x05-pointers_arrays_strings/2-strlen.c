#include "main.h"

/**
 *  _strlen - retuns sting length
 *  @s: input parameter
 *  Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
