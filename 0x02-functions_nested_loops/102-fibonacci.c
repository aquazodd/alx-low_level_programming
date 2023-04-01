#include <stdio.h>
/**
 * main - prints the fibonacci sequence starting with 1 and 2
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	long long i, sum;
	long long first = 1;
	long long second = 2;

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
