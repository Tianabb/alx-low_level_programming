#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %Ilu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %Ilu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %Ilu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %Ilu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %Ilu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
