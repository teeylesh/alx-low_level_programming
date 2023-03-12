#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string
 * Return: 0
 */
void _puts(char *str)
{
	int g = 0;

	while (str[g])
	{
		_putchar(str[g]);
		g++;
	}
	_putchar('\n');
}
