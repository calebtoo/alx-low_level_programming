#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @toolist: toolist
 */

void print_char(va_list toolist)
{
	printf("%c", va_arg(toolist, int));
}

/**
 * print_int - prints integer
 * @toolist: toolist
 */

void print_int(va_list toolist)
{
	printf("%d", va_arg(toolist, int));
}

/**
 * print_float - prints float
 * @toolist: toolist
 */

void print_float(va_list toolist)
{
	printf("%f", va_arg(toolist, double));
}

/**
 * print_string - prints string
 * @toolist: toolist
 */

void print_string(va_list toolist)
{
	char *s;

	s = va_arg(toolist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying amounts of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list toolist;

	datatype choice[] =
	{
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	/* iterate format */
	va_start(toolist, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(toolist);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(toolist);
	printf("\n");
}
