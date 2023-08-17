#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of integers passed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int argc;

	va_list argb;

	va_start(argb, n);

	for (i = 0; i < n; i++)
	{
		argc = va_arg(argb, const unsigned int);
		printf("%d", argc);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argb);
}
