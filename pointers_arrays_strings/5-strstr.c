#include "main.h"
#include <stdio.h>
/**
 * *_strstr - Entry
 * @haystack: chaine
 * @needle: chaine
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
