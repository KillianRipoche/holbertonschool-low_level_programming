#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - entry
 * @s: reverse
 *
 */
void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;
	b = _strlen(s) - 1;

	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;

		a++;
		b--;
	}
}
