#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}

