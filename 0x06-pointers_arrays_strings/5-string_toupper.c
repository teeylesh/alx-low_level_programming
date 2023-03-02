#include "main.h"

/**
 * string_toupper - changes all lowercase letters of string to upper case
 * @g: pointer to string
 * Return: point to upper case string
 */
char *string_toupper(char *g)
{
	int len = 0;

	while (g[len] != '\0')
	{
		if (g[len] >= 97 && g[len] <= 122)
		{
			g[len] = g[len] - 32;
		}
		len++;
	}
	return (g);
}
