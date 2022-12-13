#include "main.h"

/**
 * main - print _putchar
 * Return: 0
 */

int main(void)

{
char word[8] = "putchar";
int w;
for (w = 0; w < 8; w++)
_putchar(word[w]);

_putchar('\n');
return (0);
}
