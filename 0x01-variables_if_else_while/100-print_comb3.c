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
				putchar(c + '0');
				putchar(d + '0');
				if (c + d != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
