#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers
 * @a : the first integer to swap
 * @b : the second integer to swap
 * Return : nothing
 */
void swap_int(int *a, int *b)
/* function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
