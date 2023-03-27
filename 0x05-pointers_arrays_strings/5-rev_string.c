#include<stdio.h>
#include "main.h"
/**
 * rev_string - prints reverse of a string
 * @s: string
 */
void rev_string(char *s)
{
	char z;

	z = strrev(s);
	printf("%c", z);
	return (0);
}
