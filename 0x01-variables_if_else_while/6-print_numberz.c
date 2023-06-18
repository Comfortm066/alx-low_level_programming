#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all numbers under Base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
