#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: arguments passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int check_stat;
	char *a;

	va_list argc;

	va_start(argc, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argc, int));
				check_stat = 0;
				break;
			case 'i':
				printf("%d", va_arg(argc, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(argc, double));
				check_stat = 0;
				break;
			case 's':
				a = va_arg(argc, char *);
				if (a == NULL)
					a = "(nil)";
				printf("%s", a);
				break;
			default:
				check_stat = 1;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(argc);
}
