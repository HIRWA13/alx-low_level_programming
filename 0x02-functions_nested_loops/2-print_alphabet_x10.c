#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  *
  * Return: nothing.
  */
void print_alphabet_x10(void)
{
	int start = 97, end = 122, count = 1;

	while (count <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		start = 97;
		count++;
	}
}
