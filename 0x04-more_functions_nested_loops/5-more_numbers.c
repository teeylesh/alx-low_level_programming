#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
