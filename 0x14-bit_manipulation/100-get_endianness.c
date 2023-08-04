#include "main.h"
/**
 * get_endianness - that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	return ((int)*ptr);
}
