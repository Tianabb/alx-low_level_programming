#include "main.h"

/**
 * print_most_numbers - function that prints from 0 to 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
int w = '0';

for (; w <= '9'; w++)
{
if (w != '2' && w != '4')
_putchar(w);
}
_putchar('\n');
}
