#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 * Return: value as expected if condition is met
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int bb;

	n = n - 1;
	while (i <= n)
	{
		bb = a[i];
		a[i++] = a[n];
		a[n--] = bb;
	}
}
