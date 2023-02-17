#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of 2 two
 * digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firsts;
	int seconds;

	for (firsts = 0; firsts <= 98; firsts++)
	{
		for (seconds = firsts + 1; seconds <= 99; seconds++)
		{
			putchar((firsts / 10) + '0');
			putchar((firsts % 10) + '0');
			putchar(' ');
			putchar((seconds / 10) + '0');
			putchar((seconds / 10) + '0');

			if (firsts == 98 && seconds == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
