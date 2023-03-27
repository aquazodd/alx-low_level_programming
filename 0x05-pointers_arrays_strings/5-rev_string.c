#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - prints reverse of a string
 * @s: string
 */
void rev_string(char *s)
{
	char s;
	int i;
	long int length = strlen(s);
	
	for(i=0; i<length; ++i)
	{
		reversed[length-i-1] = s[i];
	}
	printf("%s\n",reversed);
}

