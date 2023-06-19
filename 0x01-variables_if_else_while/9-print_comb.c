#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print 0, 1, -9 with comma and spaces
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 10);
	{
	putchar(i + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(',');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
