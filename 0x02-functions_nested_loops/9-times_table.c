#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int t, d, e;

	for (t = 0; t < 10; t++)
	{
		for (d = 0; d < 10; d++)
		{
			e = d * t;
			if (d == 0)
			{
				_putchar(e + '0');
			}

			if (e < 10 && d != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			}
			else if (e >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
