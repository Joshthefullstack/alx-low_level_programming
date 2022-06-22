#include "main.h"
#include <stdio.h>

/**
 * a function that prints the reverse of a string
 * @*s = string
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
