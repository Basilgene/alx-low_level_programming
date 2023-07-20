#include "main.h"
/**
 * _isupper - to detect upper case alphabet
 * @c: input character
 * Return: (1) for success (0) for failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
