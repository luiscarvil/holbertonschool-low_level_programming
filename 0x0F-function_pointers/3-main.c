#include "3-calc.h"

/**
 *main - take arguments and convert.
 *@argc: integer.
 *@argv: integer.
 *Return: 0 all ok.
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc == 4)
	{
		total = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
