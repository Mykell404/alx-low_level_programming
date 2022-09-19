#include "main.h"
/**
 * swap_int - a function that swaps integer
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
