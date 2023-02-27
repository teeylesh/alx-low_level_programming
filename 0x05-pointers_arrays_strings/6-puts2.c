#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character followed by a new line
 * @str: parameter to be checked
 * Return: 0
 */
void puts2(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		if (g % 2 == 0)
		{
			_putchar(str[g]);
		}
		g++;
	}
	_putchar('\n');
}
