#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Prints an integer
 * @ap: Argument pointer
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *s = "";

	print_type spec[] = {
			{"%c", print_char},
			{"%i", print_int},
			{"%f", print_float},
			{"%s", print_string},
			{NULL, NULL},
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (spec[j].spec)
		{
			if (format[i] == spec[j].spec[1])
			{
				printf("%s", s);
				spec[j].f(ap);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
