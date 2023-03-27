#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: int
 * Return: u
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
