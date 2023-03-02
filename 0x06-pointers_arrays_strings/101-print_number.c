#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int numb;

	numb = n;

	if (n < 0)
	{
		_putchar(45);
		numb = -n;
	}
	if (numb / 10)
	{
		print_number(numb / 10);
	}
	_putchar((numb % 10) + '0');
}
