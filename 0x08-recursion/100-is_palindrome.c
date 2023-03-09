#include "main.h"

/**
 * _strlen - checks length of string
 * @str: reference string
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * _pali - checks if string is palindrome
 * @a: first index
 * @b: second index
 * @c: third index
 * Return: 1 if palindrome, 0 if not palindrome
 */
int _pali(int a, int b, char *c)
{
	if (a >= b)
	{
		return (1);
	} else if (c[a] != c[b])
	{
		return (0);
	}
	else
	{
		return (_pali(a + 1, b - 1, c));
	}
}

/**
 * is_palindrome - states if string is palindrome
 * @s: reference string
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int g;

	g = _strlen(s) - 1;
	{
		return (_pali(0, g, s));
	}
}
