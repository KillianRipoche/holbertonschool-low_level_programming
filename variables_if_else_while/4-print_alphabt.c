#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 'e' || a == 'q')
			a++;
	}
	putchar('\n');
	return (0);
}
