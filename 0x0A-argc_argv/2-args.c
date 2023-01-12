#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 0;

	if (argc > 0)
	{
	while (a < argc)
	{
	printf("%s\n", argv[a]);
	a++;
	}
	}
	return (0);
}
