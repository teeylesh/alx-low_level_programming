#include <stdio.h>
#include "main.h"
/**
 * prints numbers 1 to 100 followed by a new line
 */
int main(void);
int _putchar(char a)
{
	for (a = 1; a <= 100; a++)
	{
		while ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (((a % 5) != 0) && ((a % 3) != 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			_putchar(a);
			_putchar(' ');
		}
		a++;
	}
	_putchar('\n');
	return (0);
}
