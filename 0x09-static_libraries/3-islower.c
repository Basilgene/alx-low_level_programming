#include "main.h"
/**
 * _islower - checks lowercase and uppercase
 * Description: use _putchar to print
 * @c: collect alphabet
 * Return: 1 and 0
 */
int _islower(int c)
{
	char j;
	int lower = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
