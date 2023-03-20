#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 after code execution
 */
int main(void)
{
char alphabet;
for (alphabet = 122; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
