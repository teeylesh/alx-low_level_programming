#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Description: computes the absolute value of an integer
 * @n: int to check
 * Return: absolute value of integer
 */
int _abs(int)
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
