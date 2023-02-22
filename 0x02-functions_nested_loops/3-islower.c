#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase character C
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	int g = 'a';

	for (g = 'a'; g <= 'z'; g++)
	{
		if (c == g)
		{
			return (1);
		}
	}
	return (0);
}
