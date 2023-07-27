#include "main.h"
/**
 * string_toupper - change lowercase letter of a string to uppercase
 * @n: number of bytes
 * Return: 0
 */
char *string_toupper(char *n)
{
	int t;

	t = 0;
	while (n[t] != '\0')
	{
		if (n[t] >= 'a' && n[t] <= 'z')
			n[t] = n[t] - 32;
		t++;
	}
	return (n);
}
