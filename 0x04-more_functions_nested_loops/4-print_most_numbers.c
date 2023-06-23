#include "main.h"
/**
 * print_most_numbers -prints 0-9 without 2 and 4
 *
 * @void: void
 *
 */
void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
