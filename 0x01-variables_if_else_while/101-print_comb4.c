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
	int e;

	for (c = 48; c <= 57; c++)
	{
		for (d = 48; d <= 57; d++)
		{
			for (e = 48; e <= 57; e++)
			{
				if (c != d && c != e && d != e && c < d && d < e)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (c + d + e != 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

