#include "main.h"
#include <stdio.h>
/**
 * _strcpy - opies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * @src: parameter to be checked
 * @dest: parameter to be checked
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int g = -1;

	do {
		g++;
		dest[g] = src[g];
	} while (src[g] != '\0');

	return (dest);
}
