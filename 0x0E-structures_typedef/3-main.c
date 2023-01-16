#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
dog_t my_dog;

my_dog.name = "Rollin";
my_dog.age = 1.5;
my_dog.owner = "Mat";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
