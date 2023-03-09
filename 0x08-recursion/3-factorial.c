#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number
 * @1: factorial of 0
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
