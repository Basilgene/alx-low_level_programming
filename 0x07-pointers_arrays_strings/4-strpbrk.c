#include "main.h"
/**
 * _strpbrk - This function searches a string
 * @s: string to search for
 * @accept: string to search from
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
