#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: number of bytes used frm src
 * Return: Return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, k;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (k = 0; src[k] != '\0' && n > 0; k++, n--, i++)
{
dest[i] = src[k];
}

return (dest);
}
