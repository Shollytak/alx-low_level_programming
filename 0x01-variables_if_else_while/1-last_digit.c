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
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("lastdigit of %d is ", n);
	lastdigit = n % 10;
	if (lastdigit > 5)
		printf("%d and is greaterthan 5\n", lastdigit);

	else if ((lastdigit < 6) && (lastdigit < 0))
	
		printf("%d and is less than 6 and less than 0\n", lastdigit);
	
	else
	
		printf("%d and is 0\n", lastdigit);
	
	return (0);
}
