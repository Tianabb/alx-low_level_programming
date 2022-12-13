#include "main.h"
#include <unistd.h>

/**
 * main - print _putchar
 *
 * Return: Always 1
 */
int _putchar(char c)
{
return(write(1, &c, 1));

