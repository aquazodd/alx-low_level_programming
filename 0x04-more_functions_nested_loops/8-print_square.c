#include "main.h"
/**
 * print_square - prints square
 * @size: takes int
 */
void print_square(int size)
{
	int i;
	int b;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
