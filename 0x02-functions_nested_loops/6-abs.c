#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - Entry point
 * Description: computes the absolute value of an integer
 * @n: parameter to check
 * Return: value of integer
 */
int _abs(int)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
