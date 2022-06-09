#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers between 0 and 9
 * Return: no return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
