#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int g;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (g = 0; g < n && src[g] != '\0'; g++, len++)
	{
		dest[len] = src[g];
	}
	dest[len] = '\0';
	return (dest);
}
