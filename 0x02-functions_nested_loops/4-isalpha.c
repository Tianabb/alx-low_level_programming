#include "main.h"

/**
 * _isalpha - check for char alphabet
 * @c: thee char is to be checked
 * Return: 1 if char is lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	char okeke, christ;
	int big = 0;

	for (okeke = 'a'; okeke <= 'z'; okeke++)
	{
		for (christ = 'A'; christ <= 'Z'; christ++)
		{
			if (c == okeke || c == christ)
				big = 1;
		}
	}
	return (big);
}
