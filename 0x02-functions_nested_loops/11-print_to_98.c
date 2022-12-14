#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - functions that prints all natural numbers
 * @n: integer input
 * Description: prints all natural numbers
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
