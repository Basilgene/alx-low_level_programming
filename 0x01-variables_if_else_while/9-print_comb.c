#include <stdio.h>
/**
 * main - This program prints all possible combination for single digit
 * Return: 0
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{

		putchar(numbers);
		if (numbers <= '9')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
