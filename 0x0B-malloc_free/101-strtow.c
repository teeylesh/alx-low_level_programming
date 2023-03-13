#include "main.h"

int _length(char *str);
int _count(char *str);
char **strtow(char *str);

/**
 * _length - locates end of first word contained in a string
 * @str: reference string
 * Return: indx marking end of word pointed to by str
 */
int _length(char *str)
{
	int ind = 0, length = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		length++;
		ind++;
	}
	return (length);
}

/**
 * _count - counts no of words within a string
 * @str: reference string
 * Return: no of words within string
 */
int _count(char *str)
{
	int ind = 0, words = 0, length = 0;

	for (ind = 0; *(str + ind); ind++)
	{
		length++;
	}
	for (ind = 0; ind < length; ind++)
	{
		if (*(str + ind) != ' ')
		{
			words++;
			ind += _length(str + ind);
		}
	}
	return (words);
}

/**
 * strtow - splits string into words
 * @str: string to be split
 * Return: pointer to array of strings or NULL if otherwise
 */
char **strtow(char *str)
{
	char **strings;
	int ind = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = _count(str);
	if (words == 0)
	{
		return (NULL);
	}
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[ind] == ' ')
		{
			ind++;
		}
		letters = _length(str + ind);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strings[w][l] = str[ind++];
		}
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
