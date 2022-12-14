#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @r: intger number
 * Description: returns an adbsolute value
 * Return: absolute value of r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
