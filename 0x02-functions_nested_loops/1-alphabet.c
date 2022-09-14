#include"main.h"

/**
 * main - entry point
 * 
 * Description - lowercase alphabet
 *
 * Return: 0
 */

void alphabet_print(void)
{
	char alpha;
	alpha = 'a';

	while(alpha <= 'z');
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
