#include<stdio.h>
#include "main.h"
/**
 * rev_string - prints reverse of a string
 * @s: string
 */
void rev_string(char *s)
{
	printf("%c", strrev(s));
	return 0;
}
