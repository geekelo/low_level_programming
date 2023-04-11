#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of numbers in base 2
 * Return: the base 10 equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;
	int len = 0;
	/* search for invallid character and */
	/* get the length of array */
	while (b[i] != '\0')
	{
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);
		i++;
		len++;
	}
	/*does the conversion*/
	len = len - 1;
	i = 0;
	while (len >= 0)
	{
		if ((b[i] == '1') && (len > 1))
			dec += _pow(2, len);

		if ((b[i] == '1') && (len == 1))
			dec += 2;
		if ((b[i] == '1') && (len == 0))
			dec += 1;
		len--;
		i++;
	}
	return (dec);
}

/**
 * _pow - calculates base to a given power
 * @base: the base number
 * @power: the given power
 * Return: the result
 */

unsigned int _pow(unsigned int base, int power)
{

	while (power > 1)
	{
		base *= 2;
		power--;
	}
	return (base);
}

