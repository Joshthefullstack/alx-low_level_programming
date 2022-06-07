#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a;
	int i;

	for (a = 1; a <= 9; a++)
	{
		for (i = 92; i <= 122; i++)
		{
			putchar(i);
		}
	putchar ('\n');
	}
}
