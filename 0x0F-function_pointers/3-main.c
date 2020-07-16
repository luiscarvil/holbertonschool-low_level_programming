#include "3-calc.h"

/**
 *main - take arguments and convert.
 *@argc: integer.
 *@argv: integer.
 *Return: 0 all ok.
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
