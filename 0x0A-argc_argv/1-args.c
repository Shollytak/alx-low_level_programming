#include <stdio.h>
#include <stdlib.h>
/**
  * main - print the number of argument passed
  * @argc: Count arguments
  * @argv: Arguments
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	(void)argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
