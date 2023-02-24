#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: parameter for number of times _ should be printed
 * Return: 0
 */
void print_line(int n)
{
	int h = 0;

	while (h < n && n > 0)
	{
		_putchar('_');
		h++;
	}
	_putchar('\n');
}
