#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i, j, multi;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multi = i * j;
	{
		printf("%d\n", multi);
	}
	return (0);
}
