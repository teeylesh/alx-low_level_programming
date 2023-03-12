#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter to be checked
 * Return: value of length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
