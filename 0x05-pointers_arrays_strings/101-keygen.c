#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */
int main (void)
{
	int pas;
	char c;

	srand(time(NULL));
	while (pas <= 2645)
	{
		c = rand() % 128;
		pas += c;
		putchar(c);
	}
	putchar(2772 - pas);
	return (0);
}
