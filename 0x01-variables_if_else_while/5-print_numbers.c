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
	int numbers = 0;

	for (numbers = 0; numbers < 10; numbers++)
	{
	printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
