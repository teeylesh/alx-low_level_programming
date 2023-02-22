#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: n is an integer
 * Description: prints last digit of a number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int dig = n % 10;

	if (n < 0)
	{
		dig = dig * -1;
	}
	_putchar(dig + '0');
	return (dig);
}
