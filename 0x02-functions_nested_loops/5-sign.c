#include "main.h"
/**
 * print_sign - print sign of a number
 * Description: there will be conditions
 * @n: input value
 * Return: 0 and 1
 */
int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}
