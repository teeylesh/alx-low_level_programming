#include "main.h"

/**
 * leet - encodes string into 1337
 * @g: pointer to string
 * Return: pointer to g
 */
char *leet(char *g)
{
	int stringz, leetz;
	char letterz[] = "aAeEoOtTlL";
	char numbz[] = "4433007711";

	stringz = 0;
	while (g[stringz] != '\0')
	{
		leetz = 0;
		while (leetz < 10)
		{
			if (letterz[leetz] == g[stringz])
			{
				g[stringz] = numbz[leetz];
			}
			leetz++;
		}
		stringz++;
	}
	return (g);
}
