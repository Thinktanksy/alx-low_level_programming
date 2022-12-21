#include <unistd.h>



/**
 * _putchar - writes the charcter c to stdout
 * @c: char to be printed
 * Retrun: 1 or success
 */

int _putchar(void)
{
	return (write(1, &c, 1));
}
