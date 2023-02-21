#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
