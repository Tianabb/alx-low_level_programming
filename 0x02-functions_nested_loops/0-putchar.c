#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */

int main(void)
{
char _putchar;
for (_putchar = 'a'; _putchar <= 'z'; _putchar++)
{
putchar(_putchar);
}
for (_putchar = 'A'; _putchar <= 'Z'; _putchar++)
{
putchar(_putchar);
}
putchar('\n');
return (0);
}
