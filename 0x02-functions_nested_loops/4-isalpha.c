#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: takes in character
 * Return: 0 if no alphabets detected
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
