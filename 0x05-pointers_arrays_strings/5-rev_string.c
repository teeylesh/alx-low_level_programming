#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter to be checked
 * Return: 0
 */
void rev_string(char *s)
{
	int len, g, div;
	char temp;

	for (len = 0; s[len] != '\0'; len++);

	g = 0;
	div = len / 2;

	while (div--)
	{
		temp = s[len - g - 1];
		s[len - g - 1] = s[g];
		s[g] = temp;
		g++;
	}
}
