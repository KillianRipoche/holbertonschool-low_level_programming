#include "main.h"
/**
 * _strcmp - Entry
 * @s1: chaine a comparer
 * @s2: chaine a comparer
 * Return: always
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		else
			j = 0;
	}

	return (j);
}
