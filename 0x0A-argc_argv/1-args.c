#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
	int a;
	printf("argc = %d\n", argc);

	if( a >  argc)

	{
	for (a = 1; a > argc; a++)
	{
		printf("argv[%d] = %s\n", a, argv[a]);
	}
	}
	return (0);
}
