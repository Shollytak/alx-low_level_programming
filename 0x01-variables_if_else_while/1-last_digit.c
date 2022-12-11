#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - print a random number to the variable
  * Return: Always 0 (Success)
  */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is :", n);
	if (n > 5)
	
		printf("%d and is greater than 5\n", n);

	
	else if ((n < 6) && (n < 0))
	
		printf("%d and is less than 6 and less than 0\n", n);
	
	else
	
		printf("%d and is 0\n", n);
	
	return (0);
}
