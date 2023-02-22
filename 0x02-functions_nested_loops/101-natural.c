#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int test_fig;
	int sum = 0;

	for (test_fig = 0; test_fig <= 1024; test_fig++)
	{
		if ((test_fig % 3 == 0) || (test_fig % 5 == 0))
		{
			sum += test_fig;
		}
	}
	printf("%d\n", sum);
	return (0);
}
