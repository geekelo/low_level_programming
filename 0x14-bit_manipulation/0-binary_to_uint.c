#include "main.h"


unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec, n, num;
	int len = 0;

	/*search for invallid character and 
	get the length of array
	*/
	while (b[i] != '\0')
	{
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);
		i++;
		len++;
	}

	len = len - 1;
	dec = 0;
	while (len >= 0)
	{
		if (b[len] == '1')
			num = 1;
		if (b[len] == '0')
			num = 0;
		if (num == 1)
		{
			if (len == 1)
				n = 2;
			if (len == 0)
				n = 1;
			if (len > 1)
				n = _pow(2, len);

			dec += 1 * n; 
		}
		len--;
	}
	return (dec);
}

unsigned int _pow(unsigned int base, int power)
{

	while (power > 1)
	{
		base *= base;
		power--;
	}
	return (base);
}

