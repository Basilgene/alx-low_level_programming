#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints string
 * @separator: string to be printed
 * @n: number of strings passed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;

	va_list arga;

	va_start(arga, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(arga, char *);
		if (a == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arga);
}
