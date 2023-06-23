#include "main.h"

/**
 * print_triangle - Print a triangle of squares according to parameters
 * @size: The size of squares triangle
 * Return: empty
 */

void print_triangle(int size)

{
	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; z > size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar(32);
	}
	for (z = 0; z <= x; z++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}



