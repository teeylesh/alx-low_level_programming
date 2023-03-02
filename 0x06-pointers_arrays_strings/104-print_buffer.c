#include "main.h"
#include <stdio.h>
/**
 * print_buffer - this function prints a buffer
 * @b: pointer to buffer
 * @size: size of bufferpointer b
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int g;

	for (g = 0; g <= (size - 1) / 10 && size; g++)
	{
		printf("%08x: ", g * 10);
		if (g < size / 10)
		{
			print_line(b, 9, g);
		}
		else
		{
			print_line(b, size % 10 - 1, g);
		}
		putchar('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}
