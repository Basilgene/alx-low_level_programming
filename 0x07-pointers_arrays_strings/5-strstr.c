#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to locate from
 * @needle: string to locate for
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	if (*haystack == *needle)
		return (haystack);
	return (0);
}
