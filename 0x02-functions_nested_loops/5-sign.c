#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - Entry point
 * Description: prints sign of a number
 * @n: character to be checked
 * Return: 1 if true, 0 if false and -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
