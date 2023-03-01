#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
        int len = 0;
        int g;

        while (dest[len] != '\0')
        {
                len++;
        }
        for (g = 0; src[g] != '\0'; g++, len++)
        {
                dest[len] = src[g];
        }
        dest[len] = '\0';
        return (dest);
}
