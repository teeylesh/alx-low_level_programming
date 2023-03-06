#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: target match
 * Return: number of bytes from s that consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int f = 0, g;
	int similar = 0;

	while (s[f] != '\0')
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (s[f] == accept[g])
			{
				similar++;
				break;
			}
			if (accept[g + 1] == '\0' && s[f] != accept[g])
			{
				return (similar);
			}
		}
		f++;
	}
	return (similar);
}
