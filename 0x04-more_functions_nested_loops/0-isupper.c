#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase letters
 * @c: accepts letters
 * Return: 0 if uppercase 1 if lowercase
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
