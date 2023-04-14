#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string
 *          or NULL if the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + n] = '\0';

	return (result);
}
