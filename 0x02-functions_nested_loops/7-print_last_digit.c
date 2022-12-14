#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @r: intger input
 * Description: last digit of a number
 * Return: last number of r
 */
int print_last_digit(int r)
{
	int w;

	if (r < 0)
		w = -1 * (r % 10);
	else
		w = r % 10;
	_putchar((w % 10) + '0');
	return (w % 10);
}
