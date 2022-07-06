#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Input number
 * Description: this function prints sign
 * Return: 1 if number is positive,0 if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
