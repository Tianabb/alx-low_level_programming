#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: thee char is to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c);
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
return (1);
else
return (0);
}
