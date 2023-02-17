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
			if (firsts < seconds)
			{
				putchar((firsts / 10) + 48);
				putchar((firsts % 10) + 48);
				putchar(' ');
				putchar((seconds / 10) + 48);
				putchar((seconds % 10) + 48);

				if (firsts != 98 || seconds != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
