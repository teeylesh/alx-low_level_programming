#include "main.h"
#define NULL 0

/**
 * _strchr - locates character in a string
 * @c: character in string
 * @s: string of reference
 * Return: pointer to character if found, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int g = 0;

	while (s[g] != '\0' && s[g] != c)
	{
		g++;
	}
	if (s[g] == c)
	{
		return (&s[g]);
	}
	else
	{
		return (NULL);
	}
}
