#include "variadic_functions.h"
#include <stdio.h>

/**
  * sum_them_all - adds all numbers
  * @n: The number of parameters passed
  * @...: A variable number of parameters to calculate the sum of.
  *
  * Return: If n == 0 - 0.
  *         Otherwise - the sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
