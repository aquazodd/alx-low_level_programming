#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: takes int
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
