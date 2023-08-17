#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of argument to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list argu;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(argu, const unsigned int);
		}
	}
	va_end(argu);
	return (sum);
}
