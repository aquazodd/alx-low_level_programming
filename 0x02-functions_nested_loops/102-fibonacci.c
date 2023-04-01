#include <stdio.h>
/**
 * main - prints the fibonacci sequence starting with 1 and 2
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int i, sum;
	int first = 1;
	int second = 2;

	for (i = 1; i < 50; i++)
	{
		printf("%d, ", first);
		sum = first + second;
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
