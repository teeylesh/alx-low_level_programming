#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_times_table - Entry point
 * @n : number of times table
 * Definition: prints n times table starting with 0
 */
void print_times_table(int n)
{
	int t, d, e;

	if (n >= 0 && n <= 15)
	{
		for (t = 0; t <= n; t++)
		{
			for (d = 0; d <= n; d++)
			{
				e = d * t;
				if (d == 0)
				{
					_putchar(e + '0');
				} else if (e < 10 && d != 0)
				{
					 _putchar(',');
					 _putchar(' ');
					 _putchar(' ');
					 _putchar(' ');
					 _putchar(e + '0');
				} else if (e >= 10 && e < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((e / 10) + '0');
					_putchar((e % 10) + '0');
				}
				else if (e >= 100)
				{
					 _putchar(',');
					 _putchar(' ');
					 _putchar((e / 100) + '0');
					 _putchar(((e / 10) % 10) + '0');
					 _putchar((e % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
