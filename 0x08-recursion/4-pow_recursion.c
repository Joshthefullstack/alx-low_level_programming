#include "main.h"

/**
 * int _pow_recursion - return the value of x raised to the power of y
 * @x - int
 * @y - power being raised to
 * Return: returns value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x ^ y);
}
