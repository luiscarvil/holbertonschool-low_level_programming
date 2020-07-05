#include <stdio.h>
/**
 *main - contain argc_argv
 *@argc: arguments count
 *@argv: pointer argument vector.
 *Return: Always 0 success.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
		else
		{
			argv[0] = argv[4];
			printf("%s\n", argv[0]);
	}
	return (0);
}
