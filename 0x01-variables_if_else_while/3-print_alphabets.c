#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabets
 * Return: Always 0
 */
int main(void)
{
char christiana;
for (christiana = 'a'; christiana <= 'z'; christiana++)
{
putchar(christiana);
}
for (christiana = 'A'; christiana <= 'Z'; christiana++)
{
putchar(christiana);
}
putchar('\n');
return (0);

}
