#include "mai.h"       
/**
 * swap_int - function swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Ret     urn: 0 Succes
 */
 void swap_int(int *a, int *b)
{
	int temporal;
	
	temporal = *a;
	
	*a = *b;
	b = temporal;
}
