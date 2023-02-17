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
	int thirddi;

	for (firstdi = '0'; firstdi <= '9'; firstdi++)
	{
		for (seconddi = '0'; seconddi <= '9'; seconddi++)
		{
			for (thirddi = '0'; thirddi <= '9'; thirddi++)
			{
				if (firstdi < seconddi && seconddi < thirddi)
				{
					putchar(firstdi);
					putchar(seconddi);
					putchar(thirddi);

					if (firstdi != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
