#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: points to the first value
 * @b: points to the second integer
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
