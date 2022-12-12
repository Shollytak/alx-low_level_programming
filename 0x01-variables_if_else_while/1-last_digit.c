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
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
	
		printf("%d and is greater than 5\n", num);

	else if ((num < 6) && (num < 0))
	
		printf("%d and is less than 6 and less than 0\num", n);
	
	else
	
		printf("%d and is 0\num", n);
	
	return (0);
}
