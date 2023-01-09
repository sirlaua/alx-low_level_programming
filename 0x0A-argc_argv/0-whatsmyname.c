#include <stdio.h>
/**
 * main - prints its name, a new line
 * @argc: number of command line argument(s)
 * @argv: array that contains the program command line argument(s)
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
