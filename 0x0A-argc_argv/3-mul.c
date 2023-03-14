#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 if successful, 1 if two arguments aren't given
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
