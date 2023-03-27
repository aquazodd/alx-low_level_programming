#include "main.h"
/**
 * swap_int - swaps integer values
 * @b: int
 * @a: int
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
