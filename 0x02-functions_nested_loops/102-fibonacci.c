#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1
 * and 2, followed by a new line
 * Return: 0
 */
int main(void)
{
	int fibz;
	unsigned long f1 = 0, f2 = 1, fib;

	for (fibz = 0; fibz < 50; fibz++)
	{
		fib = f1 + f2;
		printf("%lu", fib);

		f1 = f2;
		f2 = fib;

		if (fibz == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
