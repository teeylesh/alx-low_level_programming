#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of
 * two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstdi;
	int seconddi;

	for firstdi (firstdi = '0'; firstdi <= '9'; firstdi++)
	{
		for seconddi (seconddi = '0'; seconddi <= '9'; seconddi++)
		{
			if (firstdi < seconddi)
			{
				putchar(firstdi);
				putchar(seconddi);

				if (firstdi != '8' || (firstdi == '8' && seconddi != '9'))
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
