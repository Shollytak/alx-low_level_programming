#include "main.h"

/**
  * _isupper - checks uppercase
  * @c: The number to be checked
  * Return: 1 for uppercase or 0 for any else
  */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
