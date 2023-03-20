#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 program success
 */
int main(void)
{
char uppercase;
char lowercase;
for (uppercase = 'a'; uppercase <= 'z'; uppercase++)
{
putchar(uppercase);
}
for (lowercase = 'A'; lowercase <= 'Z'; lowercase++)
{
putchar(lowercase);
}
putchar('\n');
return (0);
}
