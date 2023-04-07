#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index.
 * @n: the pointer to a number to modify
 * @index: the index with a bit to modify
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;
    unsigned long int one = 1;
    
    if (index >= sizeof(unsigned long int) * 8)
		return (-1);
    
    mask = one << index;
    *n |= mask;

    return (1);
}
