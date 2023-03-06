#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: matirx
 * @b: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int diagonal1 = 0;
	int diagonal2 = 0;
	int row, b;

	for (row = 0; row < size; row++)
	{
		b = (row * size) + row;
		diagonal1 += a[b];
	}
	for (row = 1; row <= size; row++)
	{
		b = (row * size) - row;
		diagonal2 += a[b];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
