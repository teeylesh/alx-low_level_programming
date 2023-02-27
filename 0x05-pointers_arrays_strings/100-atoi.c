#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 * Return: integer value of converted string
 */
int _atoi(char *s)
{
	int d = 1;
	unsigned int g = 0;

	do {
		if (*s == '-')
			d *= -1;
		else if (*s >= 0 && *s <= 9)
			g = (g * 10) + (*s - 0);

		else if (g > 0)
			break;
	} while (*s++);

	return (g * d);
}
