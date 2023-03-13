#include "main.h"

/**
 * argstostr - concatenates all arguments of your program
 * @ac: no of arguments
 * @av: double pointer to arguments
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			n++;
		}
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
