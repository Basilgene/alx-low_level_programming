#include "main.h"
#include <stdlib.h>
/**
 * _strdup - newly allocated space in memory which contains a copy of string
 * @str: string to copy
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *a;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	a = malloc(sizeof(char) * count + i);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
