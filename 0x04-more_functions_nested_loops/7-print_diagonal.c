#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int d, e;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			if (d != 0)
			{
				for (e = 0; e < n; e++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
