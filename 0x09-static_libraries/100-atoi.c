#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: n
 */
int _atoi(char *s)
{
	int i, d, n, len, a, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	a = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && a == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}
	if (a == 0)
		return (0);
	return (n);
}
