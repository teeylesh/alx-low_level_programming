#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: parameter to be checked
 * Return: 0
 */
void print_rev(char *s)
{
	int w = 0;

	while (s[w])
		w++;
	while (w--)
		_putchar(s[w]);
	_putchar('\n');
}
