#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenation of two string
 * @s1: first string
 * @s2: second string
 * Return: Pointer with space or null if it's an ampty string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	ptr = malloc((i + j) + 1);

	if (ptr == NULL)
		return (NULL);
	while (k < (i + j))
	{
		if (k <= i)
			ptr[k] = s1[k];
		if (k >= i)
			ptr[k] = *s2++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
