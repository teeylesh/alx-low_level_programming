#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @g: pointer to string
 * Return: pointer to g
 */
char *rot13(char *g)
{
	int string, rot;
	char fir[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
			'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z'};
	char sec[] = {'n', 'o', 'p', 'q', 'r', 's', 't',
			'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b',
			'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M'};

	for (string = 0; g[string] != '\0'; string++)
	{
		for (rot = 0; rot < 53; rot++)
		{
			if (fir[rot] == g[string])
			{
				g[string] = sec[rot];
				break;
			}
		}
	}
	return (g);
}
