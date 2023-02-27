#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: a is an integer
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int g;

	g = 0;
	for (n--; n >= 0; n--, g++)
	{
		printf("%d", a[g]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
