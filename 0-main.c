#include "main.h"
/**
  * main - tests function that prints if integer is positive or negative
  * Return: 0
  */
int main(void)
{
	int i;
	i = 98;

	if (i > 98)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);

}
