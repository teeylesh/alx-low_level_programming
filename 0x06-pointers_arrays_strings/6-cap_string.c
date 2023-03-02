#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @g: pointer to string
 * Return: pointer to g
 */
char *cap_string(char *g)
{
	int cap = 0;

	while (g[cap] != '\0')
	{
		if (g[0] >= 97 && g[0] <= 122)
		{
			g[0] = g[0] - 32;
		}
		if (g[cap] == ' ' || g[cap] == '\t' || g[cap] == '\n'
		|| g[cap] == ',' || g[cap] == ';' || g[cap] == '.'
		|| g[cap] == '!' || g[cap] == '?' || g[cap] == '"'
		|| g[cap] == '(' || g[cap] == ')' || g[cap] == '{'
		|| g[cap] == '}')
		{
			if (g[cap + 1] >= 97 && g[cap + 1] <= 122)
			{
				g[cap + 1] = g[cap + 1] - 32;
			}
		}
		cap++;
	}
	return (g);
}
