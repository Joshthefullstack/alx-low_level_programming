#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print most numbers 0-9 except two and four.
 * (neither 2 nor 4).
 *Return: no return.
 */
void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i < 9; i++)
	{
		if (i != 2 && i != 4)
		{	
			putchar(i);
		}
	}
	putchar('\n');
}
