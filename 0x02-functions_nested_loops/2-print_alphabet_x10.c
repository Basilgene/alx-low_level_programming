#include "main.h"
/**
 * print_alphabet_x10 - prints_alphabets x10
 *
 * Description: using _putchar to print
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
