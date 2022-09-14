#include "main.h"

/**
 * islower - prints result if lowercase
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a') && (c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
	_putchar('\n')
}
