#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *a = str;
	int o;

	while (*a != '\0')
	{
		a++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
