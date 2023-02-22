#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks if alphabet is lower or upper case
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
