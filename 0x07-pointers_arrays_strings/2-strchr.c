#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to locate
 * @c: character to locate in s
 * Return: s or Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
