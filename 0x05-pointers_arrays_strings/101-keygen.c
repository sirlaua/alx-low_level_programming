#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -generates keygen
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, j, n, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		i = n = s = 0;
		while ((2772 - 122) > s)
		{
			j = rand() % 62;
			p[i] = c[j];
			s += c[j];
			i++;
		}
		while (c[n])
		{
			if (c[n] == (2772 - s))
			{
				p[i] = c[n];
				s += c[n];
				i++;
				break;
			}
			n++;
		}
	}
	p[i] = '\0';
	printf("%s", p);
	return (0);
}
