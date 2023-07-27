#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int t, i, j;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (t < size)
	{
		i = size - t < 10 ? size - t : 10;
		printf("%08x:", t);
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				printf("%02x", *(b + t + j));
			else
				printf(" ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < i; j++)
		{
			int c = *(b + t + j);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		t += 10;
	}
}
