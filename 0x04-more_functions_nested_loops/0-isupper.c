#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{	
		return (0);
	}
	putchar('\n')
}
