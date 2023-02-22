#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int d, e;

	d = 0;

	while (d < 24)
	{
		e = 0;
		while (e < 60)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(':');
			_putchar((e / 10) + '0');
			_putchar((e % 10) + '0');
			_putchar('\n');
			e++;
		}
d++;
	}
}
