#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;;
	for (i = 0; dest[i] != '\0'; i++)
       	{
	}
	
	for (n = 0; src[n]; n++, i++)
	{
		dest[i] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
