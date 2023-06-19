#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the numerals of Base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char CH = 'a';

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	while (CH < 'g')
	{
	putchar(CH);
	CH++;
	}
	putchar('\n');
	return (0);
}
