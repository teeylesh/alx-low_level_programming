#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: array of number of elements
 * @c: char
 * Return: pointer to array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *g;

	if (size == 0)
	{
		return (NULL);
	}
	g = malloc(size * sizeof(char));
	if (g == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < size; b++)
	{
		g[b] = c;
	}
	return (g);
}
