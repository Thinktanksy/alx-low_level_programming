#include "main.h"

/**
 * more_numbers - print more numbers
 * _putchar only 3 times
 * Return: 0-14 10times
 */

void more_numbers(void);
{
	int i, b;

	for (i = 1; i <= 10; i++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
