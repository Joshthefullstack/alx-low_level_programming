#include "main.h"

/**
 * a function that calculates the length of a string *s
 * using strlen function
 * Return: return 0
 */
int _strlen(char *s)
{
	 int count = 0;

	while (*(s + count) != '\0')
		count++;
	return(count);
}
