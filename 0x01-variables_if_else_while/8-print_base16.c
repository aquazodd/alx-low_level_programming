#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after code succession
 */
int main(void)
{
char hex;
char hex2;
for (hex = 48; hex <= 57; hex++)
{
putchar(hex);
}
for (hex2 = 97; hex2 <= 102; hex2++)
{
putchar(hex2);
}
putchar('\n');
return (0);
}
