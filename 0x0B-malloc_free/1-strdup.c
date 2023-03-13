#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int d, e;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (d = 0; str[d]; d++)
	;
	d++;
	s = malloc(d * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < d; e++)
	{
		s[e] = str[e];
	}
	return (s);
}
