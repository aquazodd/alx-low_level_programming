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

	for (c = 0; c <= 9; c++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (c != d && c < d)
			{
				putchar(c + '0');
				putchar(d + '0');
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
