#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abet;

	for (abet = 'z'; abet >= 'a'; abet--)
	{
		putchar(abet);
	}
	putchar('\n');
	return (0);
}
