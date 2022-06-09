#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 == 0)
			printf("Fizz");
	}
	putchar('\n');
}
