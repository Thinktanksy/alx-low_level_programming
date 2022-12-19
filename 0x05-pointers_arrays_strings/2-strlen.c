#include "main.h"

/**
 * _strlen - writes function that returns the length of a strong
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s ; '\0')
	{
		len++;
		s++;
	}

	return (len);
}
