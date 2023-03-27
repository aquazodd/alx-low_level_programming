#include <unistd.h>
/**
 * _putchar - writes character
 * @c: char to print
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
