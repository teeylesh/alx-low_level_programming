#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers of base16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowe;
	char a;

	for (lowe = '0'; lowe <= '9'; lowe++)
	{
		putchar(lowe);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
