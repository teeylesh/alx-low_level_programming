#include "main.h"

/**
 * _sstring - checks if string after wildcard matches first string
 * @ss1: first string
 * @ss2: second string
 * @wild: placeholder
 * Return: 1 if matches, 0 if doesn't
 */
int _sstring(char *ss1, char *ss2, char *wild)
{
	if (*ss1 == '\0' && *ss2 == '\0')
	{
		return (1);
	}
	if (*ss1 == '\0' && *ss2 == '*')
	{
		return (_sstring(ss1, ss2 + 1, ss2 + 1));
	}
	if (*ss1 == '\0' && *ss2 != '\0')
	{
		return (0);
	}
	if (*ss2 == '*')
	{
		return (_sstring(ss1, ss2 + 1, ss2 + 1));
	}
	if (*ss1 == *ss2)
	{
		return (_sstring(ss1 + 1, ss2 + 1, wild));
	}
	else
	{
		return (_sstring(ss1 + 1, wild, wild));
	}
}

/**
 * wildcmp - checks if string matches wildcard
 * @s1: one string
 * @s2: also a string
 * Return: 1 if matches, 0 if doesn't
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (_sstring(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}
