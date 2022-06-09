#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - to check digits and return 1 or 0 otherwise
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
