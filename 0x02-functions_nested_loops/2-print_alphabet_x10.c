#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: 0 after code succession
 */
void print_alphabet_x10(void)
{
int number;
char alphabet;
for (number = 1; number <= 10; number++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
