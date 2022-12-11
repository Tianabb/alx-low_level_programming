#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet
 * Return: 0
 */

int main(void)
{
char christiana, e, q;
e = 'e';
q = 'q';
for (christiana = 'a'; christiana <= 'z'; christiana++)
{
if (christiana != e && christiana != q)
putchar(christiana);
}
putchar('\n');
return (0);
}
