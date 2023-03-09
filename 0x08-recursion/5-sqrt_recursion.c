#include "main.h"

/**
 * _sqrt - find square root of num
 * @num: number
 * @root: test
 * Return: natural square root, or -1
 */
int _sqrt(int num, int root)
{
	if (root * root > num)
	{
		return (-1);
	}
	if (root * root == num)
	{
		return (root);
	}
	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
