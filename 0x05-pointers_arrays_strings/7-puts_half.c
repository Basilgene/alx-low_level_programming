#include "main.h"
/**
 * strlen - prints length of a string
 * @str: string
 * Return: length
 */
void puts_half(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	return (longi);
}
