#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, multi;

	if (argc != 3)
	{
		printf("error\n");
			return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	multi= i * j;
	{
		printf("%d\n", multi);
	}
	return (0);
}
