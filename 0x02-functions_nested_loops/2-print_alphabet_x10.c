#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
{
	char y;
	int g = 0;

	while (g <= 9)
	{
		for (y = 'a'; y <= 'z'; y++);
		{
			putchar(y);
		}
		putchar('\n');

		g++;
	}
}
