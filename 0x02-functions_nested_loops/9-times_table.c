#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int t, e;

for (t = '0'; t <= '9'; t++)
{
for (e = '0'; e <= '9'; e++)
{
_putchar((t * e) + '0');
if (e != 9)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
}
}
}
