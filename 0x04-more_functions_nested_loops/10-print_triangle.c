#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (c = 0; c < size - a - 1; c++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
