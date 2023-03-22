#include "3-calc.h"
#include <stdlib.h>

/**
 * main - receives arguments for calculation
 * @argc: size of argv
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]) || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	ans = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", ans);
	return (0);
}

