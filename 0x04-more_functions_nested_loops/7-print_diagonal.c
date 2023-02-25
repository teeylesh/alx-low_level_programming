#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int d = 0, dd;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
		for (dd = n - d; dd < n; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
