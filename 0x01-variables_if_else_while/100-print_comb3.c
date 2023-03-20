#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after code succession
 */
int main(void)
{
int combination;
for (combination = 1; combination <= 9; combination++)
{
putchar(hex[combination]+'0');
}
return (0);
}
