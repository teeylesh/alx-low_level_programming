#include "main.h"

/**
 * _prime - divides by higher divisor and skips even numbers
 * @num: checks if prime
 * @div: divisor
 * Return: 1 if prime, 0 if not
 */
int _prime(int num, int div)
{
	if (num == div)
	{
		return (1);
	}
	if (num % div == 0)
	{
		return (0);
	}
	return (_prime(num, div + 1));
}

/**
 * is_prime_number - checks if prime
 * @n: number
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_prime(n, div));
}
