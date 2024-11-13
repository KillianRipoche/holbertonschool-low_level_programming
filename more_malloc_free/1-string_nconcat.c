#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenation of two string
 * @s1: first string
 * @s2: second string
 * @n: number of string 2
 * Return: Pointer with space or null if it's an ampty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++, j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
