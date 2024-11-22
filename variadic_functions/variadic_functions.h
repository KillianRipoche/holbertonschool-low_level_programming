#ifndef VAR_h
#define VAR_h
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct type - type of the structure
 *
 * @spec: specifier string
 * @f: function associated
 */

typedef struct type
{
	char *spec;
	void (*f)(va_list ap);

} print_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
