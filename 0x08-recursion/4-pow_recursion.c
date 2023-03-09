#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: number
 * @y: second number
 * Return: -1, if y is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (x == 1 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
