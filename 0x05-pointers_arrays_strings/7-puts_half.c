#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be checked
 * Return: 0
 */
void puts_half(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)
	;
	d++;
	for (d /= 2; str[d] != '\0'; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
