#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - alphabet
 * Return: Always 0
 */

int main(void)
{
char christy, e, q;
e = 'e';
q = 'q';
for (christy = 'a'; christy <= 'z'; christy++)
{
if (christy != e && christy != q)
putchar(christy);
}
putchar('\n');
return (0);
}
