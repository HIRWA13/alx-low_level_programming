#include "main.h"

/**
  * _islower - checks whether a cheracter passed is lowercase
  *
  * @c: character to be checked
  *
  * Return: 1 if @c else return 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
