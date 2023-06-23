#include "main.h"
/**
 * print_numbers - writes the character c to stdout
 *
 * @void: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(i + '0');
}
_putchar('\n');
}
