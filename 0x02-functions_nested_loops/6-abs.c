#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: computes the absolute value of an integer
 * Return: absolute value of integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
