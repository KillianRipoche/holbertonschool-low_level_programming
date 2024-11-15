#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string with new allocate memory
 * @str: pointer to a string
 * Return: Null if str = Null else return pointer to str
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *buffer;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;

	buffer = malloc(sizeof(char) * (len + 1));

		if (buffer == 0)
		{
			return (NULL);
		}
	for (i = 0; str[i]; i++)
		buffer[i] = str[i];

	buffer[len] = '\0';

	return (buffer);
}
