#include "calc.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 4)	
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2] != '+') && (argv[2] != '-') &&
	(argv[2] != '*') && (argv[2] != '/') && (argv[2] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if (((argv[2] == '/') || (argv[2] == '%')) && (argv[3] == '0'))
	{
		printf("Error\n");
		exit(99);
	}

}

