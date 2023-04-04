#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: A pointer to the pointer to be set
 * @to: The char pointer to set the pointer to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
