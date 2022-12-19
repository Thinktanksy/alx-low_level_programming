#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rv = s[0];
	int d = 0;
	int b;

	while (s[d] != '\0')
		d++;
	for (b = 0; b < d; b++)
	{
		d--;
		rv = s[b];
		s[b] = s[d];
		s[d] = rv;
	}

}
