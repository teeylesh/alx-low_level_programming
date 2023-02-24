#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int g = 0, gg;

	while (g < 0 && g > 0)
	{
		gg = 0;
		while (gg < g)
		{
			_putchar(' ');
			gg++;
		}

		_putchar('\');
		_putchar('\n');
		g++;
	}
	if (g == 0)
		_putchar('\n');
}
