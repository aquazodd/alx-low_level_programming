#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int c;
	int d;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			if (c != d && c < d)
			{
				putchar(c);
				putchar(d);
				if (c + d != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
