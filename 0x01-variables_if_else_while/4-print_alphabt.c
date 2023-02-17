#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabets in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
        {
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
