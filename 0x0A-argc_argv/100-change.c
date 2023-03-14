#include "main.h"
#include <stdlib.h>

/**
 * main - prints minimum no of coins required to make change
 * @argc: argument counter
 * @argv: arguments should be name of prog and amount of coins
 * Return: least amount of coins required, 0 if negative, else 1
 */

int main(int argc, char *argv[])
{
	int n, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);

	change += n / 25;
	n = n % 25;
	change += n / 10;
	n = n % 10;
	change += n / 5;
	n = n % 5;
	change += n / 2;
	n = n % 2;
	change += n / 1;

	printf("%d\n", change);
	return (0);
}
