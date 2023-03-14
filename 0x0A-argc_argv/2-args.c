#include "main.h"

/**
 * main - prints all arguments it receives, including the first one
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0, if successful
 */
int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (0);
}
