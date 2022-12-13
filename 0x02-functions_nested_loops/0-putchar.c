#include "main.h"

/**
 * main - print _putchar
 * Return: 0
 */

int main(void)

{
char word[9] = "putchar";
int w;
for (w = 0; w < 9; w++)
_putchar(word[8]);

_putchar('\n');
return (0);
}
