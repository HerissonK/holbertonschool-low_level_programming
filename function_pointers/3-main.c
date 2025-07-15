#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	opp = get_op_func(argv[2]);

	if (!opp)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", opp(atoi(argv[1]), atoi(argv[3])));
	return(0);
}
