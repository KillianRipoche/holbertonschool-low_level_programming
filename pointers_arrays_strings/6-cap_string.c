#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
/**
 * cap_string - Entry
 * @str: chaine
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;

		if (str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == ' ')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}

			i--;
		}
	}

	return (str);
}
