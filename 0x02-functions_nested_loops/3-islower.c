#include  "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * int _islower(int c) -  to return 1 if c is lowercase
 *
 * Return: Always 0.
 */
int _islower(c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
