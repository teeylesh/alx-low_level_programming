#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument of pointers to strings
 * Return: 0 if successful, or 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
			puts("Error");
			return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}

