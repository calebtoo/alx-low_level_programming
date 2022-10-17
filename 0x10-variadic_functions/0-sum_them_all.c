#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given uknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;
	unsigned int sum = 0, i;

	/* validate sumlist and initialize */
	of (n == 0)
		return (0);
	va_start(sumlist, n);

	/* iterate through the list */
	for (i = 0; i < n; i++)
		sum += va_arg(sumlist, int);
	va_end(sumlist);

	return (sum);
}
