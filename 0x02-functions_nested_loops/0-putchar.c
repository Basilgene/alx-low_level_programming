#include "main.h"
/**
 * main - print _putchar
 * Return: 0
 */
int main(void)
{

	int i = '0';
	char charArray[] = "_putchar";

	while (charArray[i] != '\0')
	{
		_putchar(charArray[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
