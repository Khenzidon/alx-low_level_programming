#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
	if (n < 0)
		return (1);
}
