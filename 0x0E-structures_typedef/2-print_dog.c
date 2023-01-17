#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Return: No
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);

		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %fn", d->age);

		if (d->owner)
		{
			printf("Owner:%f\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
