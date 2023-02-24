#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9 followed by a new line
 * @a: is an integer
 * Return: 0
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
