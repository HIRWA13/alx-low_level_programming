#include "main.h"

/**
  * print_alphabet - prints the alphabets in lower case
  *
  * Return: nothing.
  */
void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
