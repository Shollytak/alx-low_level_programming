#include <stdio.h>
#include <stdlib.h>
/**
  * main - Print all the letters except q and e
  * Return: Always 0 (Success)
  */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
		putchar(ch);

		}

		ch++;
		}
		putchar('\n');

		return (0);

}
