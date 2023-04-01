#include<stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int num = 0;
	int sum = 0;
	
	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
}

