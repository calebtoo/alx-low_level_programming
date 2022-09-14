#include "main.h"

/**
 * print_sign - prints the sign
 * @n: checks number
 * Return: 1 and prints + if n greater than 0, 0 and prints 0 if n is 0, -1 and prints - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n ==0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
		
