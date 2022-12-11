#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print base 16
 * Return: 0
 */

int main(void)
{
int w;
char christiana;
for (w = '0'; w <= '9'; w++)
{
putchar(w);
}
for (christiana = 'a'; christiana <= 'f'; christiana++)
{
putchar(christiana);
}
putchar('\n');
return (0);
}
