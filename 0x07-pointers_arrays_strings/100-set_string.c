#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: content to be copied
 * @to: string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
