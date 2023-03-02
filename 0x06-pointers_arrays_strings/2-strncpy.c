#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g;

	for (g= 0; g < n && src[g] != '\0'; g++)
	{
		dest[g] = src[g];
	}
	for (; g < n; g++)
	{
		dest[g] = '\0';
	}
	return (dest);
}
