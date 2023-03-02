#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter for first string
 * @s2: parameter for second string
 * Return: value less than 0 if string is less than other, value greater than 0
 * if string is greater than other, 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int valu;

	while (s1[len] == s2[len] && s1[len] != '\0')
	{
		len++;
	}
	valu = s1[len] - s2[len];
	return (valu);
}
